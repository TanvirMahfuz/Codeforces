#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int i,j,cap=0,sm=0;
    cin>> s;
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        sm++;
        else if(s[i]>='A' && s[i]<='Z')
        cap++;
    }
    if(cap>sm)
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
                cout<<s[i];
            }
            else cout<<s[i];
        }
    }
   else 
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
                cout<<s[i];
            }
            else cout<<s[i];
        }
    }

}