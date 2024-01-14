#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
	int a[5];a[0]=0;
	cin>>a[1]>>a[2]>>a[3]>>a[4];
	string s;cin>>s;
	int i,c=0;
	for(i=0;i<s.size();i++)
	{
	    c+=a[s[i]-48];
	}
	cout<<c;
}
 
int main() {
	int t=1;while(t--)solve();return 0;
}