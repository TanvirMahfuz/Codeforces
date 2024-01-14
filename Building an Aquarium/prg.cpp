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
    int n,x;cin>>n>>x;
    int arr[n];
    rep(n)cin>>arr[i];
    sort(arr,arr+n);
    long int height=arr[0],factor=1;
   
    rep(n-1){
        if(arr[i+1]>arr[i]){
            int j=arr[i+1]-arr[i];
            int y=x/(i+1);
            
            if(y<j){
                x-=y*(i+1);
                height+=y;
                break;
            }
            else{
                x-=j*(i+1);
                height+=j;
            }
        }    
    }
    
    int m=x/n;
    if(m>0)height+=m;
    cout<<height<<endl;
}
