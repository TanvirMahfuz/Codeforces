#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
//#define sort(v) sort(v.begin(),v.end())
#define sum(v) accumulate(v.begin(),v.end(),0);
#define ll long long 
using namespace std;
char solve();
int main() {
    fast
    int t; cin >> t;
    string x;
    while(t--){
        char s=solve();
            x+=s;
            }
        cout<<x<<endl;
    return 0;
}

char solve(){
    string s;cin>>s;
    sort(s.begin(),s.end());
    int k,i=1;cin>>k;
    while(s.size()<k){
    s+=s.substr(0,s.size()-i);i++;
    }
   return s[k-1];
}
