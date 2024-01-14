#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[n],i,j,k,sum;
    for(i=0;i<n;i++)
    cin>>a[i];
    while(m--)
    {sum=0;
        cin>> j>>k;j--;k--;
        if(j<k)
        {
            for(i=j;i<k;i++)
        {
            if (a[i]>a[i+1])
            sum=sum+(a[i]-a[i+1]);
        }
        }
        else 
        {
        	for(i=j;i>k;i--)
        {
            if (a[i]>a[i-1])
            sum=sum+(a[i]-a[i-1]);
        }
        }
        cout<<sum<<endl;
    }
}