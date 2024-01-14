#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();

int main()
{
    int t;cin>>t;while(t--){
        solve();
    }
}
void solve()
{
    int n,k,i,j;
    cin>>n>>k;
    int arr[n];
    rep(n)arr[n-(i+1)]=i+1;
    sort(arr,arr+(k+1));
    rep(n)cout<<arr[i]<<" ";
    cout<<endl;

}
