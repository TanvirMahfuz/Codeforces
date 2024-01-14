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
    int i,j;
    string s;
    int n=8;
    rep(n)
    {
        rep(n){
            char a;cin>>a;
            if(a!='.')s+=a;
            else continue;
        }
    }
    cout<<s<<endl;
   return; 
}
