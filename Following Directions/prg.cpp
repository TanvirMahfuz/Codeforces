#include <iostream>
#include <set>
#include<vector>
#include<iomanip>
#include <math.h>
#include<string>
#include<algorithm>
#include<iterator>
#define rep(n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;

bool odd(int n)
{return n%2;}

void solve();
int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    return 0;
}
void solve()
{
    int pos[2]={0,0};
    int l;cin>>l;
    string s;cin>>s;
    rep(s.size()){
        if(s[i]=='U')pos[0]++;
        else if(s[i]=='D')pos[0]--;
        else if(s[i]=='R')pos[1]++;
        else if(s[i]=='L')pos[1]--;

        if(pos[0]==1 and pos[1]==1)
        {
            cout<<"YES"<<endl;return;
        }
    }
cout<<"NO"<<endl;
return;

}