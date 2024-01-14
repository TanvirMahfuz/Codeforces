#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;while (t--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c;
        d=abs(a-b);
        d=2*d;
        if(a>d || b>d || c>d)
        cout <<-1<<endl;
        else 
        {
            if(c+(d/2)<=d)
            cout<<c+(d/2)<<endl;
            else 
            cout<<c-(d/2)<<endl;
        }
    }
}