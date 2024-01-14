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

bool odd(int n)
{return n%2;}

void solve();
int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    return 0;
}
void solve()
{
    char a;
    cin>>a;
    (a=='c'||a=='o'||a=='d'||a=='e'||a=='f'||a=='r'||a=='s')?cout<<"YES"<<endl:cout<<"NO"<<endl;
return;

}