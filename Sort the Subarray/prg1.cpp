#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
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
    while(a[i]==arr[i])i++;
    while(a[j]==arr[j])j--;
    while(i>0 and arr[i]>=arr[i-1])i--;
    while(j<n-1 and arr[j]<=arr[j+1])j++;
    
    cout<<i+1<<" "<<j+1<<endl;
return;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}