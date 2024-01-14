#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();

int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n;cin>>n;
   string s;cin>>s;
   if(n==1){
    cout<<1<<endl;return;
   }
   int i;
   unordered_set<string> st;
   st.insert(s);
   for(i=0;i<s.size();i++){
    st.insert(s.substr(i,n));
   }
   //cout<<st.size()<<endl;
   for(i=0;i<s.size()-1;i++){
    st.insert(s.substr(i,1));
    for(int j=i+2;j<s.size();j++){
        st.insert(s[i]+s.substr(j,n-j));
    }
   }
   cout<<st.size()<<endl;  
   
}
/*

*/