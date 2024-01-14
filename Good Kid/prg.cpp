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
    int i,j,k;
    int n;cin>>n;
    int arr[n];
    rep(n){
        cin>>arr[i];
    }
    sort(arr,arr+n);
   
    arr[0]=arr[0]+1;
    int tot=1;
    rep(n){
        tot*=arr[i];
    }
    cout<<tot<<endl;
    return;
}

