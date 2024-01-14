#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define ll long long 
using namespace std;
void solve();
int main() {
    fast
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
void solve(){
    int i,j,seconds=0;
    string s;cin>>s;
    int arr[5];
    arr[0]=1;
    for(i=1;i<5;i++){
        arr[i]=s[i-1]-'0';
        if(arr[i]==0)
        arr[i]=10;
    }
    for(i=1;i<5;i++){
       int mes=abs(arr[i]-arr[i-1]);
       seconds+=mes+1;
    }
    
    cout<<seconds<<endl;

}


