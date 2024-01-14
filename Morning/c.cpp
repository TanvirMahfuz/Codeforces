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
    int arr[n],ecnt=0,ocnt=0;
    bool done=false;
    rep(n)
    {
        cin>>arr[i];
        if(arr[i]%k==0)done=true;
        if(arr[i]%2==0)ecnt++;
        else ocnt++;
    }
    if(done){
        cout<<0<<endl;
        return;
    }
    if(k==2){
        cout<<1<<endl;
        return;
    }
    else if(k==3){
        int m=3;
        rep(n){
            m=min(m,(3-arr[i]%3));
            if(m==1){
                cout<<m<<endl;return;
            }    
        }
        cout<<2<<endl;
        return;
    }
    else if(k==4){
        if(ecnt>=2){
            cout<<0<<endl;
            return;
        }
        else if(ecnt==1){
            cout<<1<<endl;
            return;
        }
        else {
            int m=4;
            rep(n){
                m=min(m,4-(arr[i]%4));
                if(m==1){
                    cout<<1<<endl;
                    return;
                }
            }
            cout<<2<<endl;
            return;
        }
            
        
    }
    else{
        int m=5;
            rep(n){
                m=min(m,5-(arr[i]%5));
                if(m==1){
                    cout<<1<<endl;
                    return;
                }
            }
        cout<<m<<endl;
        return;
    }
    
}


