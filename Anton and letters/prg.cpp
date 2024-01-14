#include<iostream>
using namespace std;
int main()
{
    int t,i,a[26],n;
    for(i=0;i<26;i++)
    a[i]=0;
    char s[1000];
    cin>>s[0];
    for(i=1;i<1000;i++)
    {       
        cin>>s[i];
        if(s[i]=='}')
        break;
        else 
        {
            if(s[i]>='a' && s[i]<='z')
            a[s[i]-97]=1;
        }
    }
    int x=0;
    for(i=0;i<26;i++)
    {
        x=x+a[i];
    }
    cout<<x<<endl;
}