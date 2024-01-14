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
    int n;cin>>n;
    string s;cin>>s;
    int pmp=0;
    for(i=0,j=n-1;i<=j;i++,j--){
        if(s[i]!=s[j]){pmp++;}
    }

    if(n%2==0){
        rep(n+1){
        if(i<pmp or i>n-pmp){
            cout<<0;
        }
        else{
            if((i-pmp)%2==0)cout<<1;
            else cout<<0;
        }
        }
    }
    else{
        rep(n+1){
        (i<pmp or i>n-pmp)? cout<<0 : cout<<1;
        }
    }
    cout<<endl;
   return; 
}
