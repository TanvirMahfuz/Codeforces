#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
//#define sort(v) sort(v.begin(),v.end())
#define sum(v) accumulate(v.begin(),v.end(),0);
#define ll long long 
using namespace std;
void solve();
int main() {
    fast
    int t; cin >> t;while(t--)solve();
    return 0;
}

void solve(){
    int i,n,x,sum=0;cin>>x;
    n=2*x;
    int arr[n];
    vector <int> v1,v2;
    rep(n)cin>>arr[i];
    sort(arr,arr+n);
    rep(n/2){
        v1.push_back(arr[i]);v2.push_back(arr[n-1-i]);
    }
    rep(x-1){
        sum+=abs(v1[i+1]-v1[i])+abs(v2[i+1]-v2[i]);
    }cout<<sum<<endl;
    rep(x){
        cout<<arr[i]<<" "<<arr[n-1-i]<<endl;
    }
   
}
