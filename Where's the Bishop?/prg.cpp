#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;getchar();
    while(t--)
    {char a[8][8];
    int i,j,k=0;
    for(i=0;i<8;i++)
    for(j=0;j<8;j++)
    cin>>a[i][j];
    for(i=1;i<7;i++)
    {
    for(j=1;j<7;j++)
    {
        if(a[i][j]=='#')
        {
            if(a[i-1][j-1]=='#'&&a[i-1][j+1]=='#'&&a[i+1][j-1]=='#'&&a[i+1][j+1]=='#')
            cout<<i+1<<" "<<j+1<<endl;
        }
    }}
    }
}