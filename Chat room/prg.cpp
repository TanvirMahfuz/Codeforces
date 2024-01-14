#include<bits/stdc++.h>
using namespace std;
int main(){
   string x("hello"),s;cin>>s;
   int i=0,j=0,cnt=0;
   for(i=0;i<s.length();i++) if(s[i]==x[j]) j++;
    (j==x.size())? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}