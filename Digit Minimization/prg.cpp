#include<iostream> 
#define ll long long int
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int a[s.size()];
    int i,j=10,k;
    for(i=0;i<s.size();i++)
    {
        a[i]=s[i]-'0';
        if(a[i]<j)j=a[i];
    }
    (s.size()>2) ? cout<<j<<endl : cout<<s[1]<<endl;
}
int main()
{
    int t;cin>>t;while(t--)solve();
    return 0;
}