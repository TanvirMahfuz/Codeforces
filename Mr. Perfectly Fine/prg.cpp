#include<iostream>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();

int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{

    int n;
    cin>>n;
    int max=1000000000,j,k,l,prev=1000000000,next=1000000000;
    int a;
    char flag1='0';
    char flag2='0';
    rep(n){
        cin>>a;
        string s;
        cin>>s;
        if (s=="11"){
            if(a<=max)max=a;
        }
        else if(s=="01")
        {
            flag1 = 'n';
            if(a<=next)next = a;
        }
        else if(s=="10")
        {
            flag2 = 'p';
            if(a<=prev)prev = a;
        }
        if(flag1=='n' and flag2=='p')
        {
            int NEW=prev+next;
            if(NEW <= max )max=NEW;
        }
    }
    if(max==1000000000)cout<<-1<<endl;
    else cout<<max<<endl;
}
//8281271277321 1