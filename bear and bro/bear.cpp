#include<iostream>
using namespace std;
int main()
{
    int a,b,i=0;
    cin>>a>>b;
    while(++i)
    {
        a=a*3; b=b*2;
        
        if(a>b)
        {
            cout<<i<<endl;
            break;
        }
    }
    
}