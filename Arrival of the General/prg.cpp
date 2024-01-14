#include<iostream>
using namespace std;
int main()
{
    int a,n,high=0,low=101,i,ix=0,iy=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>high)
        {
            high=a;ix=i;
        }
        if(a<=low)
        {
            low=a;iy=i;
        }

    }n--;
    if(ix>iy)
    cout<<ix+(n-iy)-1<<endl;
    else 
    cout<<ix+(n-iy)<<endl;

}