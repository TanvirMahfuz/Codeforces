#include <iostream>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
void solve()
{
    long long int n;cin>>n;
     long long int x,y;
        y=n-2;
        x=(y*(y+1))+(n*5);
    cout<<x<<endl;
    return;

}
signed main()
{
    fast
    int t;
    cin >> t;
    while (t--)
        solve();
}
