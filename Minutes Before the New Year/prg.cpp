#include<iostream>
using namespace std;
void solve();    
int main(){
    int t;cin>>t;while(t--)solve();

}
void solve(){
    int h,m;
    cin>>h>>m;
    int M=(h*60)+m;
    cout<<(24*60)-M<<endl;
    return;
}