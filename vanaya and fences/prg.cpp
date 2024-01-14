#include<iostream>
using namespace std;
int main()
{
    int n,i,j,h;
    cin>>n>>h;j=n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
            j++;
    }
    cout<<j<<endl;
}