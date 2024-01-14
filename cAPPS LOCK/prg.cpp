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
    string s=inputstring();
    if(s.size()==1)
    {
        if((s[0]>='a' and s[0]<='z'))
        s[0]-=32;
        else s[0]+=32;
        cout<<s[0]<<endl;
        return ;

    }
    int a=0,A=0;
    rep(s.size())
    {
        if(s[i]>='a' and s[i]<='z')a++;
        else if(s[i]>='A' and s[i]<='Z')A++;
    }
    if(a==s.size())
    {
        printstring(s);
        return ;
    }
    else if(A==s.size())
    {
        rep(s.size()) s[i]+=32;
    }
    else if(s[0]>='a' and s[0]<='z')
    {
        if(A == s.size()-1)
        {
            s[0]=s[0]-32;
            rep(s.size()-1) s[i+1]+=32;
        }
    }
    printstring(s);
    return;
}
