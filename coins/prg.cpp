#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,k;
    cin>>n>>k;
    if(n%2){ //odd
        if(k%2==0)cout<<"NO\n";
        else cout<<"YES\n";
    }
    else cout<<"YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}