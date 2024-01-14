#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a, b,c,d,r;
        cin>>a>>b;
        if(a%b==0)
        r=0;
        else if(a>b)
        {
            d=a/b;
            c=b*(d+1);
            r=c-a;
        }
        else
        {
            r=b-a;
        }

        cout<<r<<endl;
    }

}