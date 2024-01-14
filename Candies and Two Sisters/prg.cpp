#include<iostream> 

using namespace std;
void solve()
{
    long long int a,b; 
    cin>>a;
    if(a%2==0)
        cout<<(a/2)-1<<endl;
    else cout<<a/2<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
        solve();
}