#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
#define ll long long 
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
int maxSubarraySum(vector<int>& arr) {
   ll int maxSum = arr[0];
   ll int currentSum = arr[0];
    
    for (size_t i = 1; i < arr.size(); ++i) {
       //currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
void printv(vector<int>& arr){
    rep(arr.size())cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    ll int n,l=0,r=0;cin>>n;
    vector <int> arr(n),divs;
    
    rep(n)cin>>arr[i];
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            //cout<<i<<endl;
            divs.push_back(i);
        }
    }
    ll int ans=0;
    rep(divs.size()){
        
        ll int mx=INT_MIN;
        ll int mn=LLONG_MAX;
        ll int sum=0;
        for(int j=1;j<=n;j++){
            sum+=arr[j-1];
            if(j%(divs[i])==0){
                mx=max(mx,sum);
                mn=min(mn,sum);
                sum=0;
            }
        }
        
        ans=max(ans,mx-mn);
    }
   cout<<ans<<endl;
}