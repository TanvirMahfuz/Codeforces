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
    int n;cin>>n;
    long long int a=3;cout<<a<<" ";
    long long int b=4;cout<<b<<" ";
    rep(n-2){
        long long int c=b+1;
        if((3*c)%(a+b)==0)c++;
        cout<<c<<" ";
        a=b;b=c;
    }
    cout<<endl;
    return;
    
}

