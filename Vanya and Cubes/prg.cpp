#include<iostream>
using namespace std;
void solve();
int sum(int n)
    {return n*(n+1)/2;}
    
int main(){
    int n;cin>>n;
    int h=0,s=0;
    while(s<n)s+=sum(++h);
    if(s>n)h--;
    cout<<h<<endl;

}
void solve(){
    
}