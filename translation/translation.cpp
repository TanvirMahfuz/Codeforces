#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[101],t[101],u[101];
    cin>>s>>t;
    int i,j,k,x=0;
    k=strlen(s);
    for(i=0,j=k-1;i<k;i++,j--)
    {
        if(s[i]==t[j])
        x=1;
        else
        {x=0;
        break;}
    }
   
   if(x==1)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}