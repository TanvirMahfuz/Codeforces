#include<iostream>
#include<string>
#include<chrono>
#include<thread>
#define rep(x) for(i=0;i<x;i++)
using namespace std;
int nextInt(){
    int x;
    cin>>x;
    return x;
}
using namespace std;

int main()
{
    int t=nextInt();
    while(t--)solve();
}


void solve(){
    
    string s;cin>>s;
    int i,j,x,y;

    for(i=1;i<s.size()/2 +1;++i){
        if(s[i]=='0')continue;
        
        x=stoi(s.substr(0,i));
        y=stoi(s.substr(i,s.size()-i));
        
        if(x<y){cout<<x<<" "<<y<<endl;return;}
    }

cout<<-1<<endl;


}


