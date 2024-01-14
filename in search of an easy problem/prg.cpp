#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        c=1;
    }
    if(c)
    cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}