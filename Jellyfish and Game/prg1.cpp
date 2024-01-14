#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define ll long long 
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
    int n,m,k;cin>>n>>m>>k;
    ll int sumG=0,sumj=0;
    int jel[n],gel[m];
    rep(n)cin>>jel[i];sort(jel,jel+n);
    rep(m)cin>>gel[i];sort(gel,gel+m);
    stack<int>st1,st2;
    st1.push(jel[n-1]);st2.push(m-1);

    for(i=1;i<=k;i++){
        if(i%2==1){
            if(sumj>sumG)continue;
            else {
                
            }
        }
        else {

        }
    }

}


110+50+30+50