#include <iostream>
#include <vector>
#include <set>

using namespace std;

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}

void solve() {
    int i, j;

    int n;
    cin >> n;

    vector<vector<int> > arr(n, vector<int>(50, 0));

    set<int> s;

    for (i = 0; i < n; i++) {
        int x;
        cin >> x;
        while (x--) {
            int a;
            cin >> a;
            arr[i][a] = 1;
            s.insert(a);
        }
    }

    int el = s.size() + 1;

    for (int col = 1; col <= 50; col++) {
        set<int> colSet;

        for (i = 0; i < n; i++) {
            if (arr[i][col] == 1) {
                for (j = 1; j <= 50; j++) {
                    if (arr[i][j] == 1) {
                        colSet.insert(j);
                    }
                }
            }
        }

        if (colSet.size() < el) {
            el = colSet.size();
        }
    }

    cout << s.size() - el << endl;
}
