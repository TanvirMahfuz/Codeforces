#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,j;
    char s[100];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        cin>>s;
        int l=strlen(s);
        if(l<=10)
        cout<< s <<endl;
        else
        {
            cout<<s[0]<<l-2<<s[l-1]<<endl;
        }

    }
}