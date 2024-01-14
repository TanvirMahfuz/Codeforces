#include <iostream>
using namespace std;

void solve();
int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    return 0;
}
void solve()
{
    int l;cin>>l;
    int i=0,j=l-1;
    string s;cin>>s;
    while(i<j and (s[i++]!=s[j--]))l-=2;
    cout<<l<<endl;
}