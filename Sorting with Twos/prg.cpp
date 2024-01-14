#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define sort(v) sort(v.begin(),v.end())
#define sum(v) accumulate(v.begin(),v.end(),0);
#define ll long long 
using namespace std;
void solve();
int main() {
    fast
    int t; cin >> t;while(t--)solve();
    return 0;
}
void PrintStack(stack<int> s)
{
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    cout << x << ' ';
    PrintStack(s);
    s.push(x);
}
void solve(){
    int i,n;cin>>n;
    int arr[n];
    stack<int> st;
    rep(n)cin>>arr[i];
    int temp=0;
    if(n==1){yes;return;}
    rep(n+1){
        if(i==pow(2,temp)-1){
            st.push(i);temp++;
        }
    }
    //cout<<"s"<<endl;
    //PrintStack(st);
    int max=0;
    bool sorted=true,incresing=false;
    //int r=st.top();
    i=n-1;
    while(!st.empty() and i>0){
        
        while(i>st.top()){

            if(arr[i]<arr[i-1])
            {
                if(i-1==st.top()){
                    i--;continue;
                }
                no;return;
            }
            i--;
        }
        st.pop();
    }
    yes;return;
}
