#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();

int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    long long int n,m;cin>>n>>m;
    long long int arr[n],brr[m],i,j,Tsondu=0,Tenzing=0;
    rep(n){
        cin>>arr[i];
        Tsondu+=arr[i];
    }
    rep(m){
        cin>>brr[i];
        Tenzing+=brr[i];
    }
    if(Tsondu>Tenzing)cout<<"Tsondu"<<endl;
    else if(Tsondu<Tenzing)cout<<"Tenzing"<<endl;
    else cout<<"Draw"<<endl;
    return;
}

