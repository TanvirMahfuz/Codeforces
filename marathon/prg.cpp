#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;while (t--)
    {
        int a[4],high=0;
    int i;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
        if(a[i]>a[0])
        high++;
    }
    cout<<high<<endl;
    }
}