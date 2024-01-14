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
    rep(n)vec.pb(input());
    sort(vec.begin(),vec.end());
    int min=0,max=vec.size()-1;
    while(min<max)
    {
        if(min==max) max--;
        
        else if(vec[max]<4)
        {
            
            while(vec[max]<4)
            {
                if(vec[min]> (4-vec[max]))
                {
                     print(n);end();
                     return ;
                }
                else 
                {
                    vec[max]+=vec[min];
                    min++;n--;
                    if(n==0)
                    {
                        print(1);end();
                        return ;
                    }
                }
            }
        }
        else max--;
    }
    print(n);
    return ;
}