#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(((a+b)==c)or ((b+c)==a)or ((a+c)==b))cout<<"yes"<<endl;
	else cout<<"NO"<<endl;
}

int main() {
	int t;cin>>t;while(t--)solve();return 0;
}