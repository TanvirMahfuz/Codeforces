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
    int i,j,k;
    bool yes=false;
    int n;cin>>n>>k;
    int arr[101]={0};
    rep(n){
        int a;
        cin>>a;
        if(a==k)yes=true;
    }
    if(yes)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}
