#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
using namespace std;
void solve();
double calculateDistance(double x1, double y1, double x2, double y2) {
    // Euclidean distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}
int main() {
    fast
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
void solve(){
    int n;cin>>n;
    (n%3==0)?cout<<"Second":cout<<"First";
    cout<<endl;
    

return;
}
