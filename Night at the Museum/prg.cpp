#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    char c[26];
    int i,j=0;
    rep(26) c[i]=i+'a';
    string s;cin>>s;
    i=0;int moves=0;
    while(i<s.size())
    {
        int n=s[i]-c[j];
            j+=n;
            n=abs(n);
            if(n>13){
                n=26-n;moves+=n;
            }
            else 
                moves+=n;
        i++;
    }
    cout<<moves;
    return 0;
}