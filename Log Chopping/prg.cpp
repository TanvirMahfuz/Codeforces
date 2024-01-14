#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();

int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n,i,j=0;cin>>n;
    int arr[n];
    rep(n)
    {
        cin>>arr[i];
        j+=arr[i]-1;
    }
    (j%2)?cout<<"errorgorn"<<endl:cout<<"maomao90"<<endl;
}


  