#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();
long long int gcd(long long a, long long b) {
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n;
    cin>>n;
    long long int i,g;
    long long  int arr[n];
    rep(n){
        cin>>arr[i];
    }
    g = gcd(arr[0],arr[1]);
    if(n==1){
        g=arr[0];
    }
    rep(n){
        g=gcd(g,arr[i]);
    }
    if(g==1){
        cout<<0<<endl;
        return;
    }
    else if(g%2==1){
        cout<<2<<endl;
        return ;
    }
    else 
    {
        for(i=2;i<1000000;i++){
            if(gcd(g,i)==1){
                cout<<i<<endl;
                return;
            }
        }
    }
}

