#include<bits/stdc++.h> 
using namespace std;
int main()
{
    string a,b,s;int i,j,k;
    cin>>a>>b>>s;
    string x=a+b;
    sort(x.begin(),x.end());
    sort(s.begin(),s.end());
    if(x==s)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}