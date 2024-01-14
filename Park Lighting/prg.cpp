#include <bits/stdc++.h>
#define rep(n) for (int i = 0; i < n; i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve()
{
    int n, m, cnt = 0;
    cin >> n >> m;
    cnt += (m / 2)*n;
    if (m % 2 == 1)
    {
        if (n % 2 == 0)
            cnt += (n / 2);
        else
            cnt += (n / 2) + 1;
    }
    
    cout << cnt << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}