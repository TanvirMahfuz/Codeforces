#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;

void solve() {
    int n,i,j,k;
    cin >> n;
    stack<int> st;
    int vec[n];
        unordered_map<int,int> mp;
    rep(n) {
        cin >> vec[i];
        mp[vec[i]]=1;
    }
    int l,r;
    l=0;
    st.push(vec[l]);
    int level=0,maxlevel=0;
    for(i=1;i<n;i++){
        r=i;
        if(vec[l]<vec[r]){
            l=r;
            while(!st.empty() and st.top()<vec[l]){
                mp[vec[l]]++;
                st.pop();
            }
            
        }
        else{
            l=i;
        }
    }
   
    return;
}

int main() {
    //fast
    int t = 1;
    while (t--) solve();
    return 0;
}
