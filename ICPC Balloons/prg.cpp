#include <iostream>

using namespace std;

int main() {
	int t;cin>>t;while(t--)
		{
			int n,i;string s;
			cin>>n;getchar();
			int a[26]={0};
			cin>>s;
			int count=0;
			for(i=0;i<s.length();i++)
				{
					if(a[s[i]-65]==0)
					{
						a[s[i]-65]++;
						count=count+2;
					}
					else 
					{
						a[s[i]-65]++;
						count++;
					}
				}
			cout<<count<<endl;
				
		}
	return 0;
}
