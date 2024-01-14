#include <iostream>
using namespace std;

void solve();
int main()
{
    int t=1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{
    bool flag=false;
    int i,j;
    char c='a';
    int n;cin>>n;
    int m;cin>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>c;
            if((c =='C')or(c =='M') or (c =='Y'))flag=true;
        }
    }
    (flag)?cout<<"#Color\n":cout<<"#Black&White"<<endl;
    return;
}
