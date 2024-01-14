#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0,i=1;
    cin>>n>>k;
    k=240-k;
    while(sum<=k)
    {
        sum=sum+(i*5);
        i++;
        
    }
    i-=2;
    if(i>n)i=n;
    cout<<i<<endl;
}