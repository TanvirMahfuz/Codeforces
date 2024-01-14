#include<iostream>
#include<vector>
using namespace std;
void solve ()
{
    int n,i,j,k;
    cin>>n;
    int l=n/2;
    n/=2;
    j=n*(n+1);
    n--;
    k=n*n;
    if((j-k)%2==1)
    {
        cout<<"YES\n";
        for(i=1;i<=l;i++)cout<<i*2<<" ";
        for(i=0;i<l-1;i++)cout<<2*i+1<<" ";
        cout<<j-k<<endl;
    }
    else cout<<"NO\n";

}
int main()
{
    int t;cin>>t;while (t--)solve();
    return 0;
}