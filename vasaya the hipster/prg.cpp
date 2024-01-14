#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j=0;
    cin>>a>>b;
    if(a>=b)
    {
        j=b;
        i=(a-b)/2;
    }
    else 
    {
        j=a;i=(b-a)/2;
    }
    
    cout<<j<<" "<<i<<endl;
}