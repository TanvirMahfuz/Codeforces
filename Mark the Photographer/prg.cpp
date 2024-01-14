#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int t;cin>>t;while(t--)
    {int n,x;cin>>n>>x;
    int a=0;
    n=2*n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr, arr + n);
    n=n/2;
    for (int i = 0; i < n; i++)
    {
        if(arr[i+n]-arr[i]<x)
        {
            a=1;break;
        }
    }
    if(a==0)
    cout<<"YES"<<endl;
    else
    cout<<"No"<<endl;
        
    }
    return 0;
}