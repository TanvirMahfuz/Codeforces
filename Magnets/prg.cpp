#include<iostream>
using namespace std;
int main()
{
    int i,n,count=1;
    string a,b;
    cin>>n;
    cin>>a;b=a;
    for(i=1;i<n;i++)
    {
        cin>>a;
        if(a==b)
            continue;
        else
        {
            count++;b=a;
        }
    }
    cout<<count<<endl;
}
