#include<iostream>
using namespace std;
int main()
{
    int t,i,a[26],n;
    for(i=0;i<26;i++)
    a[i]=0;
    cin>>n; getchar();
    char s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]>='A' && s[i]<='Z')
            a[s[i]-65]++;
        else if(s[i]>='a' && s[i]<='z')
            a[s[i]-97]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}