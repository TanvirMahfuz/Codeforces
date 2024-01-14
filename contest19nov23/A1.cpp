#include <bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = count(s.begin(), s.end(), 'B');

    if (cnt == k) {
        cout << 0 << endl;
        return;
    } else if (cnt < k) {
        int req = k - cnt;
        cout << 1 << endl;
        cout << req << " B" << endl;
        return;
    } else {
        int ans = 0;
        rep(n) {
            if (s[i] == 'B') {
                cnt--;
            }
            if (cnt == k) {
                ans = i + 1;
                break;
            }
        }
        cout << 1 << endl;
        cout << ans << " A" << endl;
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
