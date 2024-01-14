#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define ll long long 
using namespace std;
void printstack(stack<int>st){
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
void solve() {
    ll int a,b,n;
    cin>>a>>b>>n;
    ll int i,j,k;
    vector<int>vec;
    rep(n){
        int x;cin>>x;vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    int index=0;
    long long int sum=b;
    while(index<vec.size() and vec[index]<=a-1){
        sum+=vec[index];
        index++;
    }
    sum+=(a-1)*(n-index);
    cout<<sum<<endl;
    
}

int main() {
    fast
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
