#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;cin>>t;while(t--)solve();
}
void print(int n)
{
    cout<<"invoked "<<n<<endl;
}
void solve()
{
    vector<int> maxnum;
    vector<int>av,bv;
    int a,b;cin>>a>>b;
    if(a==b){cout<<a<<endl;return;}
    else if(a<10 and b<10){cout<<b<<endl;};
    int i,j,k;j=a;k=b;
    while(j>0)
    {
        av.push_back(j%10);
        j=j/10;
    }
    while(k>0)
    {
        bv.push_back(k%10);
        k/=10;
    }
    if(av[1]==bv[1])
    {
        
    }
}
