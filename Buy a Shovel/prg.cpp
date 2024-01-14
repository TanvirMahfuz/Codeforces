#include<iostream>
using namespace std;
int main()
{
	int a,i,b;
	cin>>a>>b;
	for(i=1;i<=10;i++)
	{
		if((a*i)%10==b or (a*i)%10==0)
		{
		    cout<<i<<endl;break;
		}
	}
return 0;
}