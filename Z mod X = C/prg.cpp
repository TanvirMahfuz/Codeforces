#include<iostream> 
#define ll long long int
using namespace std;
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c<<" "<<c+b<<" "<<c<<endl;
}
int main()
{
    int t;cin>>t;while(t--)solve();
    return 0;
}