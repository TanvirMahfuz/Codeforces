#include <iostream>
#include <set>
#include<vector>
#include<iomanip>
#include <math.h>
#include<string>
#include<algorithm>
#include<iterator>
#define rep(n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;

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

bool odd(int n)
{return n%2;}

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
    int arr[26]={0};
    string s=inputstring();
    int i,j=0,l=0;
    for(i=0;i<s.size();i++) arr[s[i]-97]++;
    cout<<endl;
    for(i=0;i<26;i++)
    {
        if(arr[i]==0)continue;
        if(arr[i]==1)j++;
        if(arr[i]>1)l++;
    }
    int out=(j/2)+l;
    cout<<out<<endl;
    return;
}