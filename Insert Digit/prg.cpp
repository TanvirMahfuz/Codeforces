#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n;
    char d;
    cin>>n>>d;
    string s;cin>>s;
    int i,j;
    for(i=0;i<s.size();i++)
    {
        if(s[i]<d)break;
    }
    bool flag=false;
    if(i==n)flag=true;
    j=i;
    for(i=0;i<s.size();i++)
    {
        if(i==j)cout<<d;
        cout<<s[i];
    }
    if(flag)cout<<d;
    cout<<endl;

}
//8281271277321 1