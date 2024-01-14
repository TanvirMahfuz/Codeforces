#include<iostream>
#include<vector>
using namespace std;
void solve ()
{
    string s;
    int i;
    cin>>s;
    vector <char> c;
    c.push_back(s[0]);
    for(i=1;i<s.size()-1;i+=2)
    {
        c.push_back(s[i]);
        if(s[i]==s[i+1])continue;
        else c.push_back(s[i+1]);
    }
    c.push_back(s[s.size()-1]);
        for(i=0;i<c.size();cout<<c[i++]);
            cout<<endl;
}
int main()
{
    int t;cin>>t;while (t--)solve();
    return 0;
}