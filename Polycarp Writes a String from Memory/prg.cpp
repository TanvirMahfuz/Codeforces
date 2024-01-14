#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,j=0,k=0,l=0;
        for(i=0;i<s.length();i++)
        {
            j=0;
            int a[26]={0};
            while(j<3)
            {
                if(a[s[i]-97]==0)
                    {
                        a[s[i]-97]++;
                        j++;
                        
                    }
                if(j==3)
                    {
                     while(a[s[i]-97]>0)
                     {
                        i++;
                     if(i>=s.length())
                     break;
                     }   
                     i--;
                    }
                i++;
                if(i>=s.length())
                break;
                }
            k++;
            i--;
        }
           cout<<k<<endl;
    }
        
}
