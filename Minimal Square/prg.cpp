#include<iostream>
#include<cmath>
using namespace std;
void solve ()
{
   int a,b,c,d;
   cin>>a>>b;
   c=min(a,b);
   d=max(max(a,b),2*c);
   cout<<d*d<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}