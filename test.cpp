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

int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
  vector<int> numbers;
    rep(5){
        int x;cin>>x;numbers.push_back(x);
    }
    // Using auto to deduce the iterator type
    for (auto it : numbers){
        std::cout << it << " ";
    }
    

}
