#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll flag=0;
        ll num = 0;
        for(ll i=0;i<=n;i++){
            ll count = 0;
            for(ll j=0;j<n;j++){
                if(v[j]>i)count++;
            }
            if(count==i){
                cout<<count<<endl;
                flag=1;
            }
            if(flag)break;
        }
        if(!flag)cout<<-1<<endl;
    }
}