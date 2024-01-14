#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,j,k=0;
    char c;
    c=s[0];
    for(i=1;i<s.length();i++)
    {
        if(s[i]==c)
        k++;
        else 
        c=s[i];
    }
    cout<<k<<endl;
}
