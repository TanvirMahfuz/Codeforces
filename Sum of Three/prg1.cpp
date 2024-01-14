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
    if(n<=6){cout<<"NO"<<endl;return;}
    int l=1;
    int m,r;
    if(n%2==0){
        m=n/2;
        r=m-1;
    }
    else {
        m= 1+(n/2);  
        r=m-2;
    }
    
    while (l<r){
        if(r%3!=0 and m%3!=0){
            cout<<"YES"<<endl;
            cout<<l<<" "<<m<<" "<<r<<endl;
            return;
        }
        else{
            m++;r--;
        }
    }
    cout<<"NO"<<endl;
        

}
