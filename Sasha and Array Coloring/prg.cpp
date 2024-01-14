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
    int n;cin>>n;
    int arr[n],i,j,k,sum=0;
    rep(n)cin>>arr[i];
    sort(arr,arr+n);
    i=0;j=n-1;
    while(i<j){
        sum+=(arr[j]-arr[i]);
        i++;j--;
    }
    cout<<sum<<endl;
    return;
}

