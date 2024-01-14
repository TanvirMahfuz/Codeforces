#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int i,j,l=0;
    for(i=0;i<4;i++)
    cin>>a[i];
    j=a[0];
    for(i=0;i<4;i++)
    {
        if(j<a[i])
        {j=a[i];l=i;}
    }
    swap(a[l],a[3]);
    cout<<a[0]+a[1]-a[3]<<" "<<a[0]+a[2]-a[3]<<" "<<a[1]+a[2]-a[3]<<" "<<endl;
    
}