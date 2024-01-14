#include<iostream>
#define ll long long int
using namespace std;
void solve()
{
    ll x,y,k,n,a,b;
    cin>>x>>y>>n;
    a=(n-y)/x;
    b=a*x + y;
    
cout<<b<<endl;
    
}
int main()
{
    int t;cin>>t;while(t--)solve();
    return 0;
}