#include <bits/stdc++.h>
#define rep(n) for (int i = 0; i < n; i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long int a[n];
    rep(n)cin>>a[i];
    sort(a,a+n);
    ((long long)(a[0]*a[1])>=(a[n-1] * a[n-2]))?cout<<(long long)(a[0]*a[1])<<endl:cout<<(long long)(a[n-1] * a[n-2])<<endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}