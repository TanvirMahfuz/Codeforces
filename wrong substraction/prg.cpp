#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=1;i<=b;i++)
    {
        if(a>9)
        {
            if(a%10==0)
            a=a/10;
            else
            a--;
        }
        else a--;
    }
    cout<<a<<endl;
}