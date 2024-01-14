#include<iostream>
#include<string>
using namespace std;
int main()
{
    int m,n,i,j;

    cin>>n>>m;
    string s1(m, '\0'),s2(m, '\0'),s4(m, '\0');
    for(i=0;i<m;i++)
    {
        s1[i]='#';

        if(i==0)
        s4[i]='#';
        else 
        s4[i]='.';

        if(i==m-1)
        s2[i]='#';
        else 
        s2[i]='.';
    }

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        cout<<s1<<endl;
        else if(i%2==0 && i%4 ==0)
        cout<<s4<<endl;
        else if(i%2==0)
        cout<<s2<<endl;
    }
}