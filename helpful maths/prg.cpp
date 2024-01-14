#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> st;
    string s;cin>>s;
    int i,j;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='+')
        continue;
        else st.push_back((int)s[i]-(int)'0');
    }
    sort(st.begin(),st.end());
    cout<<st[0];
    for(i=1;i<st.size();i++)
    cout<<"+"<<st[i];
}