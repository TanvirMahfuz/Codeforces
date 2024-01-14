#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[101],b[101],c[101];
    cin>>a>>b;
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='1'&& b[i]=='1')
        c[i]='0';
        else if(a[i]=='1'|| b[i]=='1')
        c[i]='1';
        else c[i]='0';       
    }
    for(i=0;i<strlen(c);i++)
    cout<<c[i];
}