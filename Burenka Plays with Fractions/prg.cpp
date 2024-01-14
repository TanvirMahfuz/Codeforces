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
#define ll long long
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
    printf("%d\n",n);
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
    int t=input();
    while(t--)
    solve();
    return 0;
}
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(long long int a, long long int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    int a=input();
    int b =input();
    int c =input();
    int d =input();
    ll int x=1ll*a*d;
    ll int y=1ll*b*c;
    if(a==0 and c==0)print(0);
    else if(a==0 or c==0)print(1);
    else if(lcm(x,y)==x and lcm(x,y)==y) print(0);
    else if(lcm(x,y)==x or lcm(x,y)==y)print (1);
    else print (2);
    return;
}
