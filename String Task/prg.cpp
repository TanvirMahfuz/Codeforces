#include<iostream> 
using namespace std;
int main()
{
    string s; 
    cin>>s;
    int i;
    for(i=0; i<s.length(); i++)
    {
        if(s[i]=='A'||s[i]=='O'||s[i]=='Y'||s[i]=='E'||s[i]=='U'||s[i]=='I'||s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')
        continue;
        else 
        {
            if(s[i]>='a'&& s[i]<='z')
            cout<<"."<<s[i];
            else cout<<"."<<(char)(s[i]+32);
        }
    }
    return 0;
}