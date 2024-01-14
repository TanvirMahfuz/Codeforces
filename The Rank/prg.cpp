#include<iostream>
using namespace std;
int main()
{
    int t,i,j,k=0,sum=0,sum1=0;
    cin>>t;
    int a[t][4];
    for(i=0;i<4;i++)
    {
        cin>>a[0][i];
        sum1=sum1+a[0][i];
    }
    for(i=1;i<t;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            cin>>a[i][j];
            sum=sum+a[i][j];
        }
        if(sum>sum1)
        k++;

    }
    cout<<k+1<<endl;
}