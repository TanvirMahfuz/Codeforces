#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();
int fsize=0;
bool change=false;
int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}

void solve()
{
    int i,j=0,k;
    int n;cin>>n;
    int arr[n];
    rep(n){
        j++;
        cin>>arr[i];
        if(arr[i]==j)j++;
        
    }
    cout<<j<<endl;

}
