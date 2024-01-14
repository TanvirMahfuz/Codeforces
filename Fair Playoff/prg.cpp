#include<iostream>
using namespace std;
void solve();
int sum(int n)
    {return n*(n+1)/2;}
    
int main(){
    int t;cin>>t;while(t--)solve();

}
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    ((max(a,b)>=min(c,d))and (max(c,d)>=min(a,b)))?cout<<"YES"<<endl:cout<<"NO"<<endl;
}