#include<iostream>
char a[26];


using namespace std;
int main()
{
    for(int i=0;i<26;i++) a[i]=(char)(i+97);

    string s,s1;
    int counts=0,counts1=0;
    cin>>s>>s1;
    int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        s[i]=(char)(s[i]+32);
        if(s1[i]>='A' && s1[i]<='Z')
        s1[i]=(char)(s1[i]+32);
        if(s[i]>s1[i])
        {
            cout<<1<<endl;
            return 0;
        }
        else if(s[i]<s1[i])
        {
            cout<<-1<<endl;
            return 0;
        }
        else continue;

    }
    cout<<0<<endl;
        return 0;

}

