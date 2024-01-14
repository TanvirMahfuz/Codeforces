#include <iostream>
#include<vector>
#include<algorithm>
#define rep(n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
vector <int> vec;
void end(){printf("\n");}
int input(){int a;cin>>a; return a;}
void print(int n){printf("%d",n);}
int main()
{
    int n=input();
    int a[n];
    rep(n)vec.pb(input());
    sort(vec.begin(),vec.end());
    rep(n)cout<<vec[i]<<" ";end();
    return 0;
}
