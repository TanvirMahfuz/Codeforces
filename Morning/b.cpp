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
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
void solve(){
    int i,j,n,k;cin>>n>>k;
    string s;cin>>s;
    int arr[26]={0};

    rep(s.size()){
        arr[s[i]-'a']++;
    }
    
    int even=0,odd=0;
    rep(26){
        if(arr[i]%2==1)odd++;
    }

    if(odd<=1)yes;
    else{
        if(k<odd-1)no;
        else yes;
    }
}


