#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
using namespace std;

void solve();

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
    int n,m;cin>>n>>m;
    (n>m)? cout<<n<<endl:cout<<m<<endl;

}
