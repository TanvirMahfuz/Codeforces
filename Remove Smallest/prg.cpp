#include<iostream>
#include<algorithm>
#define repeat(i,n) for(i=0;i<n;i++)
using namespace std;
void solve()
{
     int n,i,b,sum=0;
    cin>>n;int a[n];
    repeat(i,n)
    cin>>a[i];
    sort(a,a+n);
    repeat(i,n-1)
    {
        if(abs((a[i]-a[i+1]))>1)sum++;
    }
    if(sum==0)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int t;cin>>t;while (t--)
solve();
   return 0;
}