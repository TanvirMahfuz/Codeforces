#include<iostream>
using namespace std;
void solve ()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c>=a && c<=b) cout<<c<<endl;
    else if(d>=a and d<=b) cout<<d<<endl;
   // else if (a<=d and a>=c) cout<<a<<endl;
    //else if (b<=d and b>=c) cout<<b<<endl;
    else cout<<a+c<<endl;
}
int main()
{
    int t;cin>>t;while (t--)solve();
    return 0;
}