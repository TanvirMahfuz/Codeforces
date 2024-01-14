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
void end()
{
    printf("\n");
}

int input()
{
    int a;
    cin>>a; 
    return a;
}
void print(int n)
{
    printf("%d",n);
}

string inputstring()
{
    string s;
    cin>>s;
    return s;
}
void printstring (string s)
{
    cout<<s; 
    end();
}

void printyes(int n)
{
    if (n==1)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}


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
    int a=input();
    int b=input();
    int c=max(a,b);
    int u=6-c+1;
    int l=6;
    if(u%2==0)
    {
        u=u/2;l=l/2;
    }
    if(u%3==0)
    {
        u=u/3;l=l/3;
    }
    
    cout<<u<<'/'<<l<<endl;
    return ;
}