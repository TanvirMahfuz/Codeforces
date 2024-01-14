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
    int no_of_1=0;
    int no_of_2=0;
    int sum=0;
    int arr[n];
    rep(n)
    {
        arr[i]=input();
        if(odd(arr[i]))no_of_1++;
        else no_of_2++;
        sum=sum+arr[i];
    }
    if(odd(sum))
    {
        cout<<"No"<<endl;
        return ;
    }
    if(odd(no_of_2) and no_of_1==0)
    {
         cout<<"No"<<endl;return ;
    }
    cout<<"Yes"<<endl;
}