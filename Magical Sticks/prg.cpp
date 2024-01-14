#include<iostream>
using namespace std;
void solve();
int main(){
    int t;cin>>t;while(t--)solve();
}
void solve(){
    int n;cin>>n;
    (n%2)?cout<<(n/2)+1<<endl:cout<<n/2<<endl;return;
}