#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();

int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int i,j;
    char marker=s[0];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                cout<<s[i];
                i=j;
                break;
            }
        }
    }
    cout<<endl;
    return;
}

