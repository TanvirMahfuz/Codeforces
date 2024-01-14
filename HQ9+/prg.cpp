#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int i;
for(i=0;i<s.size();i++)
if(s[i]=='H' or s[i]=='Q' or s[i]=='9')
{
    cout<<"YES"<<endl;
    return 0;
}
cout<<"NO"<<endl;
return 0;
}