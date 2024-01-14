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
    int n=input();
    int cnt=0,max=0;
    vec.pb(0);
    rep(n)
    {
        vec.pb(input());
        if(vec[i+1]>=vec[i])
        {
            cnt++;
            (cnt>=max)? max=cnt : 0;
        }
        else cnt=1;
    }
    print(max);
    return ;
}