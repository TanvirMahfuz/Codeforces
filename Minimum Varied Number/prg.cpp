#include<iostream>
using namespace std;
int a[46]={0};

void print()
{
    for(int i=0;i<46;i++)cout<<a[i]<<endl;
}
void initiate()
{
    int i,j,k,l,n;
    for(i=0;i<10;i++)
    a[i]=i;
    for(i=10;i<18;i++)
    a[i]=(i-9)*10+9;
    j=89;
    for(k=1;k<8;k++)
    {
        a[i]=k*100+j;
        i++;
    }
    j=789;
    for(k=1;k<7;k++)
    {
        a[i]=k*1000+j;
        i++;
    }
    j=6789;
    for(k=1;k<6;k++)
    {
        a[i]=k*10000+j;
        i++;
    }
    j=56789;
    for(k=1;k<5;k++)
    {
        a[i]=k*100000+j;
        i++;
    }
    j=456789;
    a[40]=1456789;
    a[41]=2456789;
    a[42]=3456789;
    a[43]=13456789;
    a[44]=23456789;
    a[45]=123456789;
}
void solve()
{
    initiate();
    int n;
    cin>>n;
    cout<<a[n]<<endl;

}
int main()
{
    int t;cin>>t;while(t--) solve();
    return 0;
}