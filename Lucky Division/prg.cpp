#include<bits/stdc++.h>
using namespace std;
bool check(int x)
{
    int i,cnt=0;
    string s=to_string(x);
    for (i=0;i<s.size();i++)
    {
        if(s[i]=='4' or s[i]=='7')cnt++;
    }
    if(cnt==s.size()) return true;
    else return false;
}
int main()
{
    int a,b,i,j,k,cnt=0;
    cin>>a;
    vector <int> vec;

    if(check(a))
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else 
    {
        for(i=1;i<a;i++)
        if(check(i))vec.push_back(i);

        for(i=0;i<vec.size();i++)
        {
            if(a%vec[i]==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
   
}