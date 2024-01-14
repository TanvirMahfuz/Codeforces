#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();

int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}

void solve()
{
    int i,j=0;
    int n,k;
    cin>>n>>k;
    int count=0;
    bool process=false;
    char arr[n];
    rep(n){
        cin>>arr[i];
    }
    rep(n){
        if(!process){
            if(arr[i]=='B')
                process=true;
            //cout<<"process set in motion at index "<<i<<endl;
        }

        while(process){
            //cout<<" process started at index "<<i<<endl;
            if(count>=k){
                count=0;
                process=false;
                j++;i--;
            }
            else
                {
                    count++;
                    i++;
                }
            
        }
    }
    cout<<j<<endl;
        
}
