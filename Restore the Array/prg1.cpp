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

    int n=input();
    int arr[n],mini=10000000;
    rep(n-1)arr[i]=input();
    cout<<arr[0]<<" ";
    rep(n-2){
        (arr[i]<=arr[i+1])?cout<<arr[i]<<" ":cout<<arr[i+1]<<" ";
    }
     cout<<arr[n-2]<<endl;
return;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
