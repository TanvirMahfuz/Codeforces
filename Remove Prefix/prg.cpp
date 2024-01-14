#include<iostream>
using namespace std;

void solve()
{
    int a[200001]={0};
    int i,n; cin>>n;
    int b[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=n-1;i>=0;i--)
    {
        if(a[b[i]]!=0)
        break;
        else 
            a[b[i]]++;
    }
    cout<<i+1<<endl;
}
int main()
{
    int t;cin>>t;while(t--) solve();
    return 0;
}