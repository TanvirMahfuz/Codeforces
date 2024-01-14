#include<iostream>
#include<vector>
using namespace std;
void solve ()
{
   int i,j,k;cin>>j;
    int a[26]={0};
    string s;
    cin>>s;
    a[s[0]-65]=1;
    for(i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])continue;
        else 
        {
            
            if(a[s[i+1]-65]==0)
            a[s[i+1]-65] =1;
            else 
            {
            	cout<<"NO"<<endl;
            	return ;
            	
            }
        }
    }
    cout<<"YES\n"; return ;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}