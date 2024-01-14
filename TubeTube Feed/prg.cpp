#include <bits/stdc++.h>
#define rep(n) for (int i = 0; i < n; i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve()
{
    int n, m, cnt = 0;
    cin>>n>>m;
    int a[n],b[n],sec=0,flag=0,pos=0,fpos=0;
    rep(n)cin>>a[i];
    rep(n)cin>>b[i];
    rep(n)
    {
        if(i+a[i]<=m){flag=1;
            //cout<<"sad"<<endl;
            if(b[i]>=pos){
                fpos=i;//cout<<fpos<<endl;
                pos=b[i];
            }
            
        }
    }
    (flag==1)?cout << fpos+1 << endl:cout<<-1<<endl;
    
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}