#include <bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    int i;
    unordered_map<string, int> substringCounts;

    for (i = 0; i < s.size(); i++)
    {
        substringCounts[s.substr(i, n)]++;
    }

    for (i = 0; i < s.size() - 1; i++)
    {
        substringCounts[s.substr(i, 1)]++;
        for (int j = i + 2; j < s.size(); j++)
        {
            substringCounts[s[i] + s.substr(j, n - j)]++;
        }
    }

    cout << substringCounts.size() << endl;
}
