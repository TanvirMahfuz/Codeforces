#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();
int fsize=0;
bool change=false;
int main()
{
    //fast
    int t=1;while(t--)solve();
}

void solve()
{
   int n;cin>>n;
   stack<int>st;
   vector<int> vec;
   rep(n){int a;
    cin>>a;vec.push_back(a);
   }
   int count=0;
   while(++count<10){
    vector<int>temp;
    temp.push_back(vec[0]);
    rep(vec.size()-1){
        if(vec[i+1]>vec[i]){
            temp.push_back(vec[i+1]);
        }
    }
    rep(temp.size())
    cout<<temp[i]<<" ";
    vec=temp;
    cout<<endl;
   }
   cout<<count;
}
