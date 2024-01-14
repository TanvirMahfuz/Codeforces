#include<iostream>
using namespace std;
int main()
{
    int i,j,n,l,a[26],a1=0,a2=0,a3=0;
    cin>> n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        a1=a1+a[0];
        else if(i==1)
        a2=a2+a[i];
        else if(i==2)
        a3=a3+a[i];
        else 

        {
        if((3*i)%i==0)
          a1=a1+a[i];
        else if((3*i + 1)%i==0)
          a2=a2+a[i];
        else if((3*i + 2)%i==0)
          a3=a3+a[i];
        }
        
    }

    l=(a1>a2)? ((a1>a3)? a1 : a3) : ((a2>a3)? a2 : a3);
    if(l==a1)
    cout<<"chest\n";
    else if(l==a2)
    cout<<"biceps\n";
    else 
    cout<<"back\n";

    

}