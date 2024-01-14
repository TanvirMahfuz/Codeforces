#include<iostream>
using namespace std;
char solve(){
    string s;cin>>s;
    sort(s.begin(),s.end());
    int k,i=1;cin>>k;
    while(s.size()<k){
    s+=s.substr(0,s.size()-i);i++;
    }
    cout<<s<<endl;
   return s[k-1];
}
int main(){
    int t ;cin>>t;
    while(t--)cout<<solve();
}