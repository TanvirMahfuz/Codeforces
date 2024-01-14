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

    int n,a,max=0,count=0;
    cin>>n;
    rep (n)
    {
        cin>>a;
        if(a==1)
        {
            max=(count>max)?count:max;
            count=0;
        }
        else count++;
    }
    max=(count>max)?count:max;
    cout<<max<<endl;
    return;
}