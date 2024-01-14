#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define pb push_back
#define all(s) s.begin(),s.end()
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
using namespace std;
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
}
void solve(){
    int a,b,c,n; cin>>a>>b>>c>>n;
    int k=a+b+c+n;
    if(k%3==0){
        if(a>k/3 || b>k/3 || c>k/3)no;
        else yes;
    }
    else no;
}
signed main(){
    fastio();
    int tc;cin>>tc;
    while(tc--)solve();
}
