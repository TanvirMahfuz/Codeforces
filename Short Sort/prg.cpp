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
    int arr[3];
    rep(3){
        char a;
        cin>>a;
        arr[i]=a-97;
    }
    rep(3){
        if(arr[i]==i){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
    return;
}

