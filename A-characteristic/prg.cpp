#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();
int nerman(int n)
{
    n=abs(n);
    return ((n-1)*n)/2;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{

    int n,k,i,j;
    cin>>n>>k;
    j=n;
    vector<int>vec;
    for(i=0;i<=n/2;i++)
    {
        int m,s;
        m=nerman(i);
        s=nerman(j-i);
        vec.push_back(m+s);
    }
    int flag=0,pos=0;
    rep(vec.size())
        if(vec[i]==k){flag=1;pos =i;break;}
    if(flag==0){cout<<"NO"<<endl;return;}
    else {
        cout<<"YES"<<endl;
        rep(pos)cout<<-1<<" ";
        rep(n-pos)cout<<1<<" ";
        cout<<endl;
         
    }
    

}
//8281271277321 1