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

bool even(int a)
{
    if (a%2==0)
    return true;
    else return false;
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
    long long int a = input();
    int x,y;
    if(a%3==0)
    {
        x=a/3;y=x;
    }
    else 
    {
        if(((a/3)*2)+((a/3)+1)==a)
        {
            x=(a/3)+1;
            y=a/3;
        }
        else
        {
            y=(a/3)+1;
            x=a/3;
        }
    }
    cout<<x<<" "<<y<<endl;
    
}