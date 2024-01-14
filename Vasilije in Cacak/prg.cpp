#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
using namespace std;
void solve();
int fsize=0;
bool change=false;
int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
 long long int sum(long long int a){
    a=a*(a+1);
    return a/2;
}
void solve()
{
    long long int n,k, x;
    cin>>n>>k>>x;
   long long int min=sum(k);
   //cout<<"min "<<k<<" : "<<min<<endl;
    long long int max= sum(n)-sum(n-k);
    //cout<<"max "<<k<<" : "<<max<<endl;
    (x>=min and x<=max)? yes:no;
    
}

