#include<iostream>
using namespace std;
int main()
{
    int a,b,k,i,n,j,cnt=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if((a+k)<=5)
        cnt++;
    }

    cout<<cnt/3<<endl;
}