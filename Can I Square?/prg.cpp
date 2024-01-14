#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
#define ll long long
using namespace std;

void solve(){
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        sum += x;
    }
    int x = sqrt(sum);
    if(x*x == sum)cout <<"YES\n";
    else cout<<"NO\n";
}
 
signed main() {
   ios_base::sync_with_stdio (0);
   cin.tie (0);
 
   int t = 1;   cin >> t;
   for (int tc = 1; tc <= t; tc++) {
      //cout<<"Case "<<tc<<": ";
      solve();
   }
   return 0;
}
