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
    int h,w,n;
    cin>>h>>w>>n;
    if(h%2==1 and w%2==1 and n>1)
    {cout<<"NO"<<endl;return;}
    int branch_of_h=1;
    int temp;
    while(h>0 and h%2==0)
    {
        h=h/2;
        branch_of_h*=2;
    }
    if(branch_of_h>=n){cout<<"Yes"<<endl;return;}
    int branch_Of_w=1;
    while(w>0 and w%2==0)
    {
        w=w/2;
        branch_Of_w*=2;
    }
    if(branch_Of_w>=n){cout<<"Yes"<<endl;return;}
    if(branch_of_h==1)
        temp=branch_Of_w;
    else if(branch_Of_w==1)
        temp=branch_of_h;
    else temp=branch_of_h*branch_Of_w;
    if(temp>=n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


return;

}
