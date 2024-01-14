#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
   int  sum1=0,sum2=0,sum3=0;
    int n;cin>>n;
    int a[n],b[n-1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=(n-1))
            b[i]=a[i];
        sum1=sum1+a[i];
    }
    sort(b,b+(n-1));
    for(i=0;i<n;i++)
    cout<<b[i];
    

}