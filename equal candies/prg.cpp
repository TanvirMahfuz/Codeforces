#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
string x="Timur";
int n;
bool compare(char one , char two)
{
    if((one=='G' and two == 'B')or (one == 'B' and two == 'G')) {one='G'; two = 'G';}
    if(one==two)return true;
    else return false;
}
void solve()
{
    cin>>n;int arr[n],min=100000000,cnt=0;
    rep(n){
        cin>>arr[i];
        if(arr[i]<=min)min=arr[i];
    }
    
    rep(n){
        if(arr[i]>=min)cnt+=(arr[i]-min);
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}