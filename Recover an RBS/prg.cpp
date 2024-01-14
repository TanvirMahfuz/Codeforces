#include<iostream>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int i,sumf=0,suml=0,sumq=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        sumf++;
        else if(s[i]==')')
        suml++;
        else sumq++;
    }
    int d;
    if(sumf>suml)
    {
        d=sumf-suml;
    }
    else d=suml-sumf;
    sumq=sumq-d;
    if(sumq>=0)
    {
        if(sumq%2==0)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;

}
int main()
{
    int t;cin>>t;while(t--)solve();
}
