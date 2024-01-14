#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long 
using namespace std;
void solve();
int main() {
    fast
    int t;cin>>t;
    while (t--) solve();
    return 0;
}
void solve(){
    stack<char>st;
    string s;cin>>s;
    bool val=false;
    rep(s.size()){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){st.push(s[i]); val=true;}
        else{
            if(st.empty())continue;
            if(s[i]==')' and st.top()=='(')st.pop();
            else if(s[i]=='}' and st.top()=='{')st.pop();
            else if(s[i]==']' and st.top()=='[')st.pop();
            else{
                cout<<"not valid"<<endl;return;
            }
        }
    }
    if(st.empty() and val)cout<<"valid"<<endl;
        else cout<<"not valid"<<endl;
    
}


