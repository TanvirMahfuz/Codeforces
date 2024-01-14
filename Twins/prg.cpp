#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n],i,sum=0,avg=0;
   for(i=0;i<n;i++)
   {
    cin>>a[i];sum=sum+a[i];
   }
   avg=sum/2;
   sum=0;
   sort(a,a+n);
   i=n;
    while(sum<=avg)
    {
        i--;
        sum=sum+a[i];
    }
    cout<<n-i<<" "<<endl;
}