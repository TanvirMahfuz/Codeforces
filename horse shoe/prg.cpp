#include<iostream>
using namespace std;
int main()
{
    int s[4],i,j,k=0;
    cin>>s[0]>>s[1]>>s[2]>>s[3];
    for(i=0;i<3;i++)
    {
        if(s[i]!=0)
        {
            for(j=i+1;j<4;j++)
            {
                if(s[i]==s[j])
                s[j]=0;
                else continue;
            }
            
        }
        else 
        continue;
    }

   for(j=0;j<4;j++)
   if(s[j]==0)
   k++;
   cout<<k;

}