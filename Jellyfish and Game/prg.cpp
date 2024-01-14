#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define sort(v) sort(v.begin(),v.end())
#define sum(v) accumulate(v.begin(),v.end(),0*1ll);
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
    unsigned ll int sumG=0,sumj=0;
    vector<ll int> v1,v2;
    rep(n){
        int temp;cin>>temp;
        v1.push_back(temp);
        sumj+=temp;
    }
    sort(v1);
    rep(m){
        int temp;cin>>temp;
        v2.push_back(temp);
        sumG+=temp;
    }
    sort(v2);
    //cout<<sumj<<" "<<sumG<<endl;
    //cout<<"..."<<v1[0]<<" "<<v2[n-1]<<endl;
    if(v1[0]<v2[m-1]){
        swap(v1[0],v2[m-1]);
        sort(v1);sort(v2);
        sumj=sum(v1);sumG=sum(v2);
        //cout<<"{"<<sumj<<"}"<<endl;
    }
    if(k==1){
        cout<<sumj<<endl;return;
    }

    if(v2[0]<v1[n-1]){
        swap(v2[0],v1[n-1]);
        sort(v1);sort(v2);
        sumj=sum(v1);sumG=sum(v2);
    }
    if(k==2){
        cout<<sumj<<endl;return;
    }
    
    if(k>2){
        if(k%2==0){
            cout<<sumj<<endl;
        }
        else{
            cout<<sumj+(v2[m-1]-v1[0])<<endl;
        }
    }



}
