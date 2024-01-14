#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();
int fsize=0;
bool change=false;
int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}

void solve()
{
    int i,j,k;
    int n;cin>>n;
    int maxel=0;
    vector< vector<int> > vec;
    set<int> s1;
    rep(n){
        vector <int> temp;
        int x;cin>>x;
        if(x>=maxel)maxel=x;
        for(j=0;j<x;j++){
            int a;cin>>a;
            temp.push_back(a);
            s1.insert(a);
        }
        vec.push_back(temp);
    }
    rep(n){
        for(j=0;j<vec[i].size();j++)cout<<vec[i][j]<<" ";
        cout<<endl;
    }
    maxel=s1.size();

    int el=0;
    rep(n){
        set <int> s;
            for(k=0;k<vec[i].size();k++){
                s.insert(vec[i][k]);
                }
            set<int> tempset;
            tempset=s;
        for(j=0;j<n;j++){
            if(i==j)continue;
            cout<<"iterating between "<<i<<" and "<<j<<endl;
            for(k=0;k<vec[j].size();k++){
                s.insert(vec[j][k]);
            }  
  
            if(s.size()==maxel){
                cout<<"->setSize: "<<s.size()<<endl;
            s=tempset;
            }
            else {
            int l=s.size();
            el=max(el,l);
            cout<<"el: "<<el<<endl;
            }
        }
        
    }
    if(el<maxel)
    cout<<el<<endl;
    else cout<<0<<endl;

}
