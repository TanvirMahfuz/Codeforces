#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int n,k,i,j=0,ai,bi;
    cin>>n>>k;int a[n],b[n];
    for(i=0;i<n;i++)cin>>a[i];sort(a,a+n);
    for(i=0;i<n;i++)cin>>b[i];sort(b,b+n);
    ai=0;bi=n-1;
    
    for(i=0;i<k;i++)
    {
        if(a[ai]>b[bi])
        break;
        swap(a[ai],b[bi]);
        ai++;bi--;
    }
    for(i=0;i<n;i++)
    {
        j=j+a[i];
    }
    cout<<j<<endl;
}
int main()
{
        int t;cin>>t;while(t--)solve();

return 0;
}