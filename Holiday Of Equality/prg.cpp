#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long int a[100],k=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[n];
        c=c+a[n];
        if(a[n]>k)
        k=a[n];
    }
    cout<<(k*n)-c<<endl;
}