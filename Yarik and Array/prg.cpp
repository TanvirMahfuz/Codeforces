#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();
void note(string s){
    cout<<s<<endl;
}
int nerman(int n)
{
    n=abs(n);
    return ((n-1)*n)/2;
}
bool check(int a,int b){
    if(a%2==0 and b%2==0)return false;
    else if (a%2!=0 and b%2!=0)return false;
    else return true;
}
int maxSubarraySum(const std::vector<int>& arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];
    
    for (size_t i = 1; i < arr.size(); ++i) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n,l=0,r=0;cin>>n;
    vector <int> arr(n);
    rep(n)cin>>arr[i];

    if(n==1){
        cout<<arr[0]<<endl;return;
    }
    int mx=INT_MIN;
    for(int i=1;i<=n;i++){
        vector<int> temp;
        temp.push_back(arr[i-1]); 
        while(i<n and check(arr[i],arr[i-1])){
            temp.push_back(arr[i]);i++;
        }
        mx=max(mx,maxSubarraySum(temp));

    }
    cout<<mx<<endl;
}