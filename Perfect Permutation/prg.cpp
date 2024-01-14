#include<iostream>
#define ll long long int
using namespace std;
void solve()
{
    int n,i;cin>>n;
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            cout<<i+2<<" ";
            else cout<<i<<" ";
        }
    }
    else 
    {
        cout<<1<<" ";
        for(i=1;i<n;i++)
        {
            if(i%2==0)
            cout<<i<<" ";
            else cout<<i+2<<" ";
        }
    }
    cout <<endl;
}
int main()
{
        int t;cin>>t;while(t--)solve();

return 0;
}