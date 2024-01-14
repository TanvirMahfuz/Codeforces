#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
string x="Timur";
int n;
void solve()
{
    string s;
    cin>>n>>s;
    sort(x.begin(),x.end());
    sort(s.begin(),s.end());

    if(x==s)cout<<yes;
    else cout<<no;

}
int main()
{
    int t;cin>>t;while(t--)solve();
}