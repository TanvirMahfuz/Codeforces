#include<bits/stdc++.h>
#include<set>
using namespace std;


void solve()
{
    int i,n; cin>>n;
    int b[n];
    set<int> st ;
    set<int>:: iterator it;
    for(i=0;i<n;i++)
    {    
        cin>>b[i];st.insert(b[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(b[i]!=st[st.size() -1])
        break;
    }
    cout<<i+1<<endl;
}
int main()
{
    int t;cin>>t;while(t--) solve();
    return 0;
}