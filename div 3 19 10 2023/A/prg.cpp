#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();

int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n;cin>>n;
    int arr[26]={0};
    string s;cin>>s;
    rep(s.size())arr[s[i]-'A']++;
    int ans=0;
    rep(26){
        if(arr[i]==0)continue;
        else {
            if(arr[i]>= (i+1))ans++;
        }
    }
    cout<<ans<<endl;

}
