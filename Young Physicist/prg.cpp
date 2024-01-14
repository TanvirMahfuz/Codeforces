#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int suma=0,sumb=0,sumc=0;
    int t;cin>>t;
    while(t--)
    {
        cin>>a; suma=suma+a;
        cin>>b; sumb=sumb+b;
        cin>>c; sumc=sumc+c;
    }
    if(suma==0 and sumb ==0 and sumc ==0 )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}