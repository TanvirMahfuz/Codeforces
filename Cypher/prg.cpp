#include <iostream>

using namespace std;

int main() {
	int t;cin>>t;while(t--)
		{
			int n,i,j,k,l;
			cin>>n;getchar();
			int a[n],b[n];
			for(i=0;i<n;i++)
				{
					cin>>a[i];
				}
			int x;
			string s[n];
			for(i=0;i<n;i++)
				{
					cin>>b[i];getchar();
					cin>>s[i];
				}
			for(i=0;i<n;i++)
            {
                
                while(b[i]--)
                {
                    if(s[i][b[i]]=='D')
                    {
                        a[i]++;
                        if(a[i]==10)
                        a[i]=0;
                    }
                    else 
                    {
                        a[i]--;
                        if(a[i]<0)
                        a[i]=9;
                    }
                }
            }
            for(i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
				
		}
	return 0;
}
