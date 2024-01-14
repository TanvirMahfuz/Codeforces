#include<iostream>

using namespace std;
int main()
{
    int a=0,i,b=0,n,j,k=0;;
    string s;
    cin>>s;
    a=s.size();
    for(i=0;i<a;i++)
    {
        if(s[i]=='.')
        cout<<'0';
        else
        {
            if(s[i+1]=='.')
            cout<<'1';
            else cout<<'2';
            i++;
        }
    }

    return 0;
}