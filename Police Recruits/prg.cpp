#include<iostream>
using namespace std;
int main()
{
    int n,x,c=0,count=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        c=c+x;

        if(c==-1)
        {
            count++;
            c=0;
        }
        else continue;
        
    }
    cout<<count<<endl;
}