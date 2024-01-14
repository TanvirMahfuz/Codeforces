#include <bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}
int gcd(int a, int b) {
  if (b == 0) 
    return a;
  return gcd(b, a % b);
}

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b)cout<<c<<endl;
    else if(b==c)cout<<a<<endl;
    else if(a==c)cout<<b<<endl;
    
}
