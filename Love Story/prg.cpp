#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();

int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    string s;cin>>s;
    string s1="codeforces";
    int count=0;
    rep(s.size()){
        if(s[i]!=s1[i])count++;
    }
    cout<<count<<endl;
    return;
}