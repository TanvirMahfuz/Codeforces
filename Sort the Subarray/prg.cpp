#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;

void printmap(map<int,int> &m)
{
    map<int,int> ::iterator it;
   for(it = m.begin();it!=m.end();++it)
   {
    cout<<(*it).first<<" "<<(*it).second<<endl;
   }
}
int input()
{
    int a;cin>>a;return a;
}
void solve()
{
    map<int,int>m;
    vector<int>vec;
    int n=input();
    int a[n],arr[n],i=0,j=n-1;

    rep(n)cin>>a[i];
    rep(n)arr[i]=input();
    int start=0,end=0;
    rep(n-1)
    {
        if(arr[i]<=arr[i+1])
        {
            start=i;
            while(arr[i]<=arr[i+1])i++;

            end=i;
            m[start]=end;
        }
    }
    printmap(m);
}
int main()
{
    int t;cin>>t;while(t--)solve();
}