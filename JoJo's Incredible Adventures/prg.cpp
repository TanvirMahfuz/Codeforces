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

int input()
{
    int a;
    cin>>a; 
    return a;
}
void print(int n)
{
    printf("%lld\n",n);
}

string inputstring()
{
    string s;
    cin>>s;
    return s;
}

bool odd(int n)
{return n%2;}

void solve();
int main()
{
    int t=input();
    while(t--)
    solve();
    return 0;
}
void solve()
{
    int cnt=0;
    unsigned long long int ans;
    vector<int>vec;
    string s=inputstring();
    if(s.size()==1 and s[0]=='1'){cout<<1<<endl;return;}
    rep(s.size())
    {
        if(s[i]=='1')
            cnt++;
        else {
            if(cnt==0)continue;
            vec.push_back(cnt);
            cnt=0;
        }

    }
    
    if(s[s.size()-1]=='1')vec.push_back(cnt);
    if(vec.size()==0){cout<<vec.size()<<endl;return;}
    if(s.size()==cnt){ans = pow(s.size(),2);cout<<ans<<endl;return;}
    if(s[0]=='1' and s[s.size()-1]=='1')vec.push_back(vec[0]+vec[vec.size()-1]);
    sort(vec.begin(),vec.end());
    
    long long int k=vec[vec.size()-1];

    if(k%2==1)
        ans= pow((k/2)+1,2);
    else 
        ans = (k/2)*((k/2)+1);

    cout<<ans<<endl;

return;

}
