#include<iostream>
using namespace std;
int main()
{
    int n,i=1;cin>>n;
    while(i<=n)
    {
        if(i%2==1)
        cout<<"I hate ";
        else cout<<"I love ";
        
        if(i==n)
            cout<<"it"<<endl;
        else cout<<"that ";
        i++;
    }
}