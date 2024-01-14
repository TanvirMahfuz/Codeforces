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
    string s;
    cin>>s;
    if(s.size()%2==1){
        cout<<"NO"<<endl;
        return;
    }
    int i,j=(s.size()/2);
    for(i=0;i<j;i++)
    {
        if(s[i]==s[j])
         j++;
        else break;
    }
    if(i==(s.size()/2))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
return;

}
