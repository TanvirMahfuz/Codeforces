#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;cin>>t;while(t--)
		{
            int n;
            cin>>n;
            int at[n];
            for(int i=0;i<n;i++)
               { 
                at[i]=0;
               
               }
            getchar();
            string s[n];
            int i,j,k,l=0;
            for(i=0;i<n;i++)
            {
                cin>>s[i];
            }
           
            for(i=0;i<n;i++)
            {
                l=0;
                
                for(j=0;j<n;j++)
                {
                    for(k=0;k<n;k++)
                    {

                    if((s[i]==s[j]+s[k])||(s[i]==s[k]+s[j]))
                        {
                            //cout<<s[j]+s[k]<<endl;
                            at[i]=1;
                            l=1;
                            break;
                        }
                    
                    }
                    if(l==1)
                    break;
                    
                    
                }
            }
            for(i=0;i<n;i++)
            {
                cout<<at[i]<<" ";
            }
			cout<<endl;
        }
	return 0;
}
