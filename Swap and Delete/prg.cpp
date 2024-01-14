#include<bits/stdc++.h>
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
   string s;cin>>s;
   int one=0,zero=0;
    rep(s.size()){(s[i]=='1')?one++:zero++;}
    if(one==zero){
        cout<<0<<endl;
        return;
    }
    int cnt=0;
   rep(s.size()){
    if(s[i]=='1'){
        if(zero==0)cnt++;
        else zero--;
    }
    else {
        if(one==0)cnt++;
        else one--;
    }
   }
   printf("%d\n",cnt);
}

