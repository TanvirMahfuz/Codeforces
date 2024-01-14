#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
using namespace std;
void solve();
int main() {
    fast
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
void solve(){
    int i,k,n;cin>>n>>k;
    vector<int>v,cave;
    rep(n){
        int a;cin>>a;v.push_back(a);
    }
    sort(v.begin(),v.end());
    int caved=1;
    int max_caved=0;
    for(i=1;i<n;i++){
        if(v[i]-v[i-1]<=k) caved++;
        else {
            max_caved=max(caved,max_caved);
            caved=1;
        }
    }

    max_caved=max(caved,max_caved);
    cout<<n-max_caved<<endl;
   return; 
}
