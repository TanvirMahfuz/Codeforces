#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();

int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n,i,j=0;
    string s;cin>>s;  
    if(s[s.size()-1]=='B')
    {   
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='B')
                j++;
            else 
            {
                if(j==0)continue;
                else j--;
            }
        }
        (j==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
    return;

}
