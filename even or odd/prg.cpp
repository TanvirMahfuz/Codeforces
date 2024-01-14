#include <iostream>
using namespace std;
void end()
{
    printf("\n");
}
int main()
{
    long long int n,k,y;cin>>n;cin>>k;
    long long int x=n/2;x++;
    if(n%2==1)
    {
       if(k<=x){y=(2*(k-1) + 1);cout<<y;}
        else {y= (2*(k-x));cout<<y;}
    }
    else if (n%2 == 0)
    {
        x--;
        if(k<=x){y=(2*(k-1) + 1);cout<<y;}
        else {y= (2*(k-x));cout<<y;}
    }
    end();
    return 0;
}
