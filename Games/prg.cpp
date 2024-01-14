#include<iostream>
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    int i,j,k=0;
        rep(n)cin>>a[i]>>b[i];
    
    rep(n)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])k++;
        }
    }
    cout<<k;
}