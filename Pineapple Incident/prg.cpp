#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long 
using namespace std;
void solve();
int main() {
    fast
    int t=1;
    while (t--) solve();
    return 0;
}
void solve(){
    int i,j,t,s,k;cin>>t>>s>>k;
    k-=t;
    if (k==0)yes;
    else if (k<0)no;
    else{
        if(k<s){no;return;}
        if(k%s==0 or (k-1)%s==0)yes;
        else no;
    }
    
}


