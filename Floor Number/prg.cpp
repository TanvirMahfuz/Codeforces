#include <iostream>
using namespace std;
#include<vector>
void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{
    int n,x,i=0,j;
    cin>> n>>x;
    while(((i*x)+2)<n)i++;
    cout<<++i<<endl;
    return;
}
