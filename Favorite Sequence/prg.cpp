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
    int n=input();
    int arr[n],i,j=n-1,flag=0;
    rep(n)cin>>arr[i];
    cout<<arr[0]<<" ";
    i=1;
    while(i<=j)
    {
        if(flag==1){
            cout<<arr[i]<<" ";i++;flag=0;
        }
        else {
            cout<<arr[j]<<" ";j--;flag=1;
        }
        
    }
    cout<<endl;
    
}
int main()
{
    int t;cin>>t;while(t--)solve();
}