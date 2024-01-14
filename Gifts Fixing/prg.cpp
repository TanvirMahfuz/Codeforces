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

bool odd(int a)
{
    return a%2;
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
    int n=input();
    long long int can[n],orr[n];
    long long int mc=1000000007,mo=1000000007;
                     
    rep(n)
    {
        can[i]=input();
        if(can[i]<mc)mc=can[i];
    }
    rep(n)
    {
        orr[i]=input();
        if(orr[i]<=mo)mo=orr[i];
    }

    rep(n){
        can[i]-=mc;
        orr[i]-=mo;
    }
    long long int sum1=0,sum2=0;
    rep(n)
    {
        long long int k1=max(orr[i],can[i]);
        long long int k2=min(orr[i],can[i]);
        sum1+=k1-k2;
        sum2+=k2;
    }

    //rep(n)cout<<can[i]<<" "<<orr[i]<<endl;
    cout<<sum1+sum2<<endl;
}

