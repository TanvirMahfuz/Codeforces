#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> n;
    int i=0,k,j;

    for(i=0;i<s.size();i++)
    {
        if (s.substr(i,3)=="WUB")
        {
            i+=2;
            n.push_back('0');
        }
        else n.push_back(s[i]);
    }
    j=0;
    while(n[j]=='0') j++;

    k=n.size()-1;
    while(n[k]=='0')k--;
    
    for(i=j;i<=k;i++)
    {
        if(n[i]=='0')
        {
            cout<<" ";
            while(n[i]=='0')i++;
        }
        cout<<n[i];
    }
    cout<<endl;
    return 0;
}