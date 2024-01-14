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
   int vec[n];
   rep(n){
    cin>>vec[i];
   }
   int prev_level_height=0;
   int prev_div_level=0;
   int max_level=0;
   int div_level=0;
   int max_height=vec[0];
   rep(n-1)
   {
        cout<<endl<< i+1<<".\titeration of "<<vec[i+1]<<":"<<endl;

    if(vec[i+1]<vec[i])
    {
        div_level=1;
        max_level=max(max_level,div_level);
        cout<<"\t"<<vec[i+1]<<" died in level 1"<<endl;
    }
    else 
    { 
        cout<<"incresing div level from .."<<div_level<<endl;
        div_level++;
        if(vec[i+1]>prev_level_height){
            if(vec[i+1]>max_height){
                div_level--;
                cout<<"\t transcended max_height..."<<max_height<<endl;
                max_height=vec[i+1];
                max_level=max(div_level,max_level);
            }
            else {
                cout<<vec[i+1]<<" has crossed prev div level height: "<<prev_level_height;
                div_level=max(div_level,++prev_div_level);
                max_level=max(max_level,div_level);
                cout<<" \tand transcended to level..."<<div_level<<endl;
                cout<<" \tmax level is noww : "<<max_level<<endl;
            }
        }
        else {
            cout<<endl<<vec[i+1]<<" could not beat prev max height.. "<<endl;
            div_level=2;
            max_level=max(max_level,div_level);
        }
        prev_level_height=vec[i+1];
        prev_div_level=div_level;
    }
   }
   if(max_level==n)cout<<0<<endl;
   else 
    cout<<max_level<<endl;
   return;
}
