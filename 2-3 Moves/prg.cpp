#include<iostream>
using namespace std;
void solve()
{
    int n,a;
    cin>>n;
    if(n==1)
    {
        cout<<2<<endl;
        return ;
    }
    if(n==2)
    {
        cout<<1<<endl;
        return ;
    }
    a=n/3;
    if(n%3>0)a++;
    cout<<a<<endl;
    return ;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}