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

bool odd(int n)
{return n%2;}

void solve();
int main()
{
    int t=1;
    while(t--)
    solve();
    return 0;
}
void solve()
{
    int n=input();
    if(odd(n))
    {
        n=(n-3)/2;
        cout<<(n+1)<<endl;
        rep(n)cout<<"2 ";
        cout<<3<<endl;
    }
    else
    {
        cout<<n/2<<endl;
        rep(n/2)cout<<"2 ";
        cout<<endl;
    }
    return;
}