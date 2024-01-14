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
void printvector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    vector<int> odd,even;
    int n;cin>>n;
    rep(n){
        int x;cin>>x;
        if(i%2==0)even.push_back(x);
        else odd.push_back(x);
  }
    
    for(int i=1;i<even.size();i++){
        even[i]+=even[i-1];
    }
    for(int i=1;i<odd.size();i++){
        odd[i]+=odd[i-1];
    }
    printvector(even);printvector(odd);
    
    
}
