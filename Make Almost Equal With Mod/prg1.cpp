#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define repi(i, n) for (i = 1; i <= n; i++)
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long int
#define vi vector<ll>
#define pb push_back
#define f first
#define sec second
#define sz(v) v.size()
#define all(v) v.begin(), v.end()
const int N = 2e7 + 10;
int gcd(int a, int b) {
  if (b == 0) 
    return a;
  return gcd(b, a % b);
}
void solve()
{
    ll i, j, n, x, y;
    cin >> n;
    ll a[n], ev = 0, od = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
            od++;
        else
            ev++;
    }
    if (od != 0 && ev != 0)
    {
        cout << 2 << endl;
        return;
    }
    ll b[n];
    sort(a, a + n);
    for (i = 0; i < n - 1; i++)
        b[i] = a[i + 1] - a[i];
    ll ans = b[0];
    for (i = 1; i <= n - 2; i++)
        ans = gcd(b[i], ans);
    cout << ans + ans << endl;
}
int main()
{
    int tc, k = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
