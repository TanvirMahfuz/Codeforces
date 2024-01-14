#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int val;
    vector<TreeNode*> children;

    TreeNode(int value) : val(value) {}
};

pair<int, TreeNode*> findDeepest(TreeNode* root) {
    if (!root)
        return {0, nullptr};

    int depth = 0;
    TreeNode* deepestNode = root;

    for (TreeNode* child : root->children) {
        auto [childDepth, deepestChild] = findDeepest(child);

        if (childDepth > depth) {
            depth = childDepth;
            deepestNode = deepestChild;
        }
    }

    return {depth + 1, deepestNode};
}

int main() {
    // Example tree
    TreeNode* root = new TreeNode(1);
    root->children.push_back(new TreeNode(2));
    root->children.push_back(new TreeNode(3));
    root->children[1]->children.push_back(new TreeNode(4));

    auto [depth, deepestNode] = findDeepest(root);

    cout << "Depth of the tree: " << depth << endl;
    cout << "Longest sequence: ";

    vector<int> longestSequence;
    TreeNode* currentNode = deepestNode;

    while (currentNode) {
        longestSequence.push_back(currentNode->val);
        if (!currentNode->children.empty()) {
            currentNode = currentNode->children[0];
        } else {
            currentNode = nullptr;
        }
    }

    for (int i = longestSequence.size() - 1; i >= 0; --i) {
        cout << longestSequence[i] << " ";
    }

    // Deallocate memory (not necessary in most online judges or platforms)
    // Handle memory deallocation appropriately in your own environment
    delete root->children[0];
    delete root->children[1]->children[0];
    delete root->children[1];
    delete root->children[0];
    delete root;

    return 0;
}
