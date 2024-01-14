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
vector <int> vec;
set <int> st;

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
    int a=input();
    int b=input();
    int n=input();
    int flag;
    int i=0;
    while(a<=n and b<=n)
    {i++;
        flag = max(a,b);
        if(a<=b)
        a=a+flag;
        else b=b+flag;
    }
    cout<<i<<endl;

}