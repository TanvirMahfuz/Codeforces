#include<iostream>
using namespace std;
int main()
{
    int a=2012;
    int c[4],i,j,k=0;
    c[0]=a%10;a=a/10;
    c[1]=a%10;a=a/10;
    c[2]=a%10;a=a/10;
    c[3]=a%10;a=a/10;
     
     for(i=0;i<3;i++)
     {
         for(j=i+1;j<4;j++)
         if(c[i]==c[j])
         {
             k=1;break;
         }
     }

     cout<<k;
}