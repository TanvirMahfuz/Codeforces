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
    int i,x,y,k;cin>>x>>y>>k;
    if(y<=x){
        cout<<x<<endl;
    }
    else{
        if(y-x<=k)cout<<y<<endl;
        else {
            cout<<y+(y-(x+k))<<endl;
        }
        
    }
  
   
}
