#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();
int sumOfN(int n){
    n=abs(n);return ((n-1)*n)/2;
}
vector<int> createVector(int n) {
    vector<int> myVector;rep(n)cin>>myVector[i];return myVector;
}
int maxSubarraySum(const std::vector<int>& arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];
     for (size_t i = 1; i < arr.size(); ++i) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }return maxSum;
}
template <typename T>
void printStackElements(const std::stack<T>& myStack) {
    std::stack<T> tempStack = myStack;
    std::cout << "Stack elements (top to bottom): ";
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << std::endl;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n,k,i,j;
    cin>>n;
    vector<int> vec(n);
    rep(n)cin>>vec[i];
    int jump=0,mx=vec[0],cntz=0;
    rep(n){
        if(vec[i]==0){
            cntz=1;
        }
        else{
            jump=max(jump,vec[i]-1)+cntz;
            cntz=0;
        }
    }

    cout<<jump<<endl;

}
