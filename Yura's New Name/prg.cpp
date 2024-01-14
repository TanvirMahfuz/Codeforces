#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();
int nerman(int n)
{
    n=abs(n);
    return ((n-1)*n)/2;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    string s;
    cin>>s;
    int i=1,j,k,cnt=0;
    if(s[0]!='^')cnt++;
    while (i<s.size()-2)
    {
        if(s[i]=='^')continue;
        else cnt++;
    }
    
}
