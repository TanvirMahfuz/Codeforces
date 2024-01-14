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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int cnt=0;
    vector<int>tr;
    rep(n)if(s[i]=='B')cnt++;
    if(cnt==k){cout<<0<<endl;return;}
    else if(cnt<k){
        int x=0,ans=0;
        rep(n){
            
            while(cnt<k){
                if(s[x]=='A')cnt++;
                x++;
            }
        }
        ans=x;
        cout<<1<<endl;
        cout<<ans<<" B"<<endl;
    }
    else{
        int ans=0;
        rep(s.size()){
            if(s[i]=='B')
            cnt--;
            //cout<<cnt<<endl;
            if(cnt==k){
                ans=i+1;
                break;
            }
        }
        cout<<1<<endl;
        cout<<ans<<" A"<<endl;
    }
    
    
}