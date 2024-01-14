#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
string x="Timur";
int n;
bool compare(char one , char two)
{
    if((one=='G' and two == 'B')or (one == 'B' and two == 'G')) {one='G'; two = 'G';}
    if(one==two)return true;
    else return false;
}
void solve()
{
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    bool flag=true;
    rep(n)
    {
        flag=compare(s1[i],s2[i]);
        if(!flag){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}