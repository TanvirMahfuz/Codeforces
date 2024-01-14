#include<iostream>
using namespace std;
void solve();
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve(){
    int n;cin>>n;n*=2;
    int i;
    int a,odd=0,even =0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        (a%2)?odd++:even++;
    }
    (odd==even)?cout<<"Yes"<<endl:cout<<"No"<<endl;

}