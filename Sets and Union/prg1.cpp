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
    int arr[n][50];
    for(i=0;i<n;i++){
        for(j=0;j<50;j++)
            arr[i][j]=0;
    }
    set<int> s;
    rep(n){
        int x;cin>>x;
        while(x--){
            int a;cin>>a;
            arr[i][a]=1;
            s.insert(a);
        }
    }

    set<int>::iterator itr;
    int store[s.size()];
    i=0;
    for(itr = s.begin();itr!=s.end();itr++){
        store[i]=*itr;i++;
        //cout<<*itr<<" ";
    }//cout<<endl;
    int el=0;
    //cout<<"size of s: "<<s.size()<<endl;
    
    for(itr = s.begin();itr!=s.end();itr++){
        //cout<<"executable itr "<<*itr<<endl;
        set<int>col;
        rep(n){
            
            if(arr[i][*itr]==1){
                //cout<<" unexecutable row since "<<*itr<<" is neglected."<<endl;
                continue;
            }
            else{//cout<<" executable row"<<endl;
                for(j=0;j<s.size();j++){
                    //cout<<"     executable col "<<store[j]<<endl;
                    if(arr[i][store[j]]==1)
                        { //cout<<"       executable con storing "<< store[j]<<" to set" <<endl;
                            col.insert(store[j]);
                        }
                }
            }
            //cout<<"colsize: "<<col.size()<<endl;
            if(col.size()>el)el=col.size();
        }
    }
    cout<<el<<endl;
}
