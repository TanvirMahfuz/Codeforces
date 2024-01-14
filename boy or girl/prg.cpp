#include<iostream>
#include<set>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    std::set<char> st;
    for(i=0;i<s.length();i++)
    {
        st.insert(s[i]);
    }
    if(st.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}