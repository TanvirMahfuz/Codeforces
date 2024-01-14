#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,i,a,b[101]={0}; cin>>n; for(i=0;i<n;i++) { cin>>a; b[a]=i+1; } for(i=0;i<101;i++){  if(b[i]!=0) cout<<b[i]<<" ";}
}