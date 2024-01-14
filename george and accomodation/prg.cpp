#include<iostream>
using namespace std;
int main()
{
    int i,n,x=0,count=0;
    int p[100],q[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p[i]>>q[i];
        x=q[i]-p[i];
        if(x>=2)
        count++;
    }
    cout<<count<<endl;
}