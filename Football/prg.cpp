#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,cnt=0;
    char c=s[0];
    for(i=0;i<s.size();i++)
    {
        if(s[i]==c)
        cnt++;
        else{
            c=s[i];cnt=1;
        }

        if(cnt==7)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}