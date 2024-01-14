#include<iostream>
using namespace std;
int main()
{
    int m[5][5];
    int i,j,a,b;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>m[i][j];
            if(m[i][j]==1)
              {
                  a=i+1;
                  b=j+1;
              }
        }
        
    }

    a=(a>3)? (a-3):(3-a);
    b=(b>3)? (b-3):(3-b);
        cout<<a+b<<endl;
}