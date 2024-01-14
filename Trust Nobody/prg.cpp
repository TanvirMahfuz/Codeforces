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

    int n,i,a,liar=-1,flag=0;
    cin>>n;
    int arr[n];
    rep(n)cin>>arr[i];
    for(i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[j]>i)c++;
        }
        if(c==i)liar=i;
    }
    cout<<liar<<endl;
    return;
}