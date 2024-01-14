#include <iostream>
#include <set>
#include<vector>
#include<iomanip>
#include <math.h>
#include<string>
#include<algorithm>
#define space " "
#define rep(n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
vector <int> vec,v;
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

bool isprime(int n)
{
    int i,j,k;
    if(n==2 or n==3 or n==5) return true;
    if(n%2 == 0 or n%3 == 0 or n %5 == 0) return false ;
    for(i=7;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
            break;
        }
    }
   return true;
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
    int even=0,odd=0,common;
    int n=input();
    rep(n)
    {
        v.pb(input());
        if(v[i]%2==0)even++;
        else odd++;
    }
    if(even>odd)common=0;
    else common=1;

    rep(n)
    {
        if(v[i]%2!=common) {print(i+1);break;}
        
    }
    return;
}
