#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;cin>>t;while(t--)solve();
}
void print(int n)
{
    cout<<"invoked "<<n<<endl;
}
void solve()
{
    int a,b;cin>>a>>b;
    if(a==b){cout<<0<<endl;return;}
     else if(b>a)( (b-a)%2)?cout<<1<<endl:cout<<2<<endl;
      else (!((a-b)%2))?cout<<1<<endl:cout<<2<<endl;

return;

}
