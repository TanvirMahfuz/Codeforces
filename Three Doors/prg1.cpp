#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    if(a[a[n-1]-1]==0|| a[n-1]==0)
    cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main()
{
    int t;cin>>t;while (t--)solve();
}