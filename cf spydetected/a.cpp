#include<iostream>
#define ll long long int
using namespace std;
void solve()
{
    int n,i,j,k,l;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    if(a[0]==a[1])
    j=a[0];
    else 
    {
        if(a[0]==a[2])j=a[0];
        else j=a[1];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=j)
        {
            cout<<i+1<<endl;
            return;
        }
    }

}
int main()
{
    int t;cin>>t;while(t--)solve();
    return 0;
}