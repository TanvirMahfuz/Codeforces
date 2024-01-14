#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long 
using namespace std;
void solve();
int findSmallest(int a, int b, int c) {
    // Using the ternary operator to find the minimum among three numbers
    int smallest = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    return smallest;
}

int main() {
    fast
    int t;cin>>t;
    while (t--) solve();
    return 0;
}
void solve(){
    int i,n,m,j;cin>>n;
    string s;cin>>s;

}