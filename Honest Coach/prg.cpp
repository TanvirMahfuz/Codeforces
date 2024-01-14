#include <iostream>
#include <set>
#include<vector>
#include<iomanip>
#include <math.h>
#include<string>
#include<algorithm>
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
    printf("%d\n",n);
}

string inputstring()
{
    string s;
    cin>>s;
    return s;
}


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
    vector <int> vec;
    int n=input();
    rep(n)vec.pb(input());
    sort(vec.begin(),vec.end());
    int max=vec[n-1]-vec[0];
    rep(n-1)
        if(vec[i+1]-vec[i]<=max)
            max=vec[i+1]-vec[i];
    cout<<max<<endl;
    return;
}