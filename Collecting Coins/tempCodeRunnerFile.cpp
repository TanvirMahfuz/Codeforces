#include <iostream>
#include<algorithm>
using namespace std;
#include<vector>
void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{
    long long  int a,b,c,n;
    cin>>a>>b>>c>>n;
    ((a+b+c+n)%3==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return;
}
