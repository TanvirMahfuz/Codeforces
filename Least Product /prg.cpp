#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n, neg=0,ind=1,zero=-1; cin>>n;
    int arr[n];
    rep(n){
        cin>>arr[i];
        if(arr[i]==0)zero++;
        if(arr[i]<0){neg++;ind=i;}
    }
    if(zero>-1){
        cout<<0<<endl;
        return;
    }
    if(neg%2==0){
        cout<<1<<endl;
        cout<<ind<<" "<<0<<endl;
    }
    else{
        cout<<0<<endl;
    }

}

