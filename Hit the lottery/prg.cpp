#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0;
    cin>>n;
    j=n/100;
    n=n%100;
    j=j+(n/20);
    n=n%20;
    j=j+(n/10);
    n=n%10;
    j=j+(n/5);
    n=n%5;
    j=j+n;
    cout<<j;

}