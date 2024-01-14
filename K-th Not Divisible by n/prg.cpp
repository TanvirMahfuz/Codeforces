#include<iostream>
using namespace std;
void solve()
{
    int n,k,a,b;
    cin>>n>>k;
        a=k/(n-1);
        b=a+k;
    if(k%(n-1)==0)
    cout<<b-1<<endl;
    else cout<<b<<endl;
   
}
int main()
{
    int t;cin>>t;while(t--)solve();
}