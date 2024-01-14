#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
void solve();

int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    vector<int>v;
    int flag=0;
    int n,m,i=0,jk;
    cin>>n>>m;
    if(n==m){cout<<"YES"<<endl;return;}
    v.push_back(n);
    while (i<v.size())
    {
        if(v[i]%3 == 0 )
        {
            int x=v[i]/3;
            if(x==m or m==2*x)
            {
            cout<<"YES"<<endl;return;
            }
            else 
            {
                v[i]=2;
                v.push_back(x);
                v.push_back(2*x);
                i++;
            }
        }
        else i++;
    }
    cout<<"NO"<<endl;
    return;
}