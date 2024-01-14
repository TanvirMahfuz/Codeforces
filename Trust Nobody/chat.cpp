#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; // Number of people
    cin >> n;

    vector<int> liars(n); // To store the number of liars each person claims
    vector<int> truthTellers(n, 0); // To store the number of truth-tellers each person claims

    // Input the statements of each person
    for (int i = 0; i < n; ++i) {
        cin >> liars[i];
    }

    // Construct the constraint system and check for contradictions
    int totalLiars = 0;
    for (int i = 0; i < n; ++i) {
        totalLiars += liars[i];
        truthTellers[i] = n - liars[i];
        if (totalLiars > n) {
            cout <<-1<<endl;
            return 0;
        }
    }

    // Output the result
    cout <<totalLiars << endl;

    return 0;
}
