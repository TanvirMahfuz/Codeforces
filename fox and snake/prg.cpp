#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,x=2,y;
    cin>>n>>m;
    char s[n][m];
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<m;j++)
             s[i][j]='#';
        }
        else
        {
            for(j=0;j<m;j++)
             s[i][j]='.';
            if(x%2==0)
            s[i][j-1]='#';
            else if(x%2==1)
            s[i][0]='#';
            x++;  
        }
          
    }

    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    cout<<s[i][j];
    cout<<endl;
    }
}