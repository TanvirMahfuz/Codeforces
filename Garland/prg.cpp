#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
int tostring(char c)
{
    if(c=='0')return 0;if(c=='1')return 1;if(c=='2')return 2;if(c=='3')return 3;if(c=='4')return 4;
    if(c=='5')return 5;if(c=='6')return 6;if(c=='7')return 7;if(c=='8')return 8;if(c=='9')return 9;
    else return -1;
}

void solve()
{
int arr[10]={0};
int n=0;
string s;cin>>s;
rep(s.size())
    arr[tostring(s[i])]++;

rep(10)
    if(arr[i]>n)n=arr[i];
if(n==4)cout<<-1<<endl;
else if(n==3)cout<<6<<endl;
else cout<<4<<endl;

return;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
