#include<iostream>
using namespace std;
int main()
{
    int n,x,i,j;
    cin>>n>>x;
    string s;
    cin>>s;
    while(x--)
    {
        for(i=0;i<s.size()-1;i++)
        if(s[i]=='B'&&s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i++;
        }
    }

    cout<<s<<endl;
}
