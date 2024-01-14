#include<iostream>
using namespace std;
int mod(long long int a ,long long int b)
{
    if(a%b==0)
    return 0;
    else return 1;
}
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int x=a/c+ mod(a,c);
    
    long long int y=b/c+ mod(b,c);
    unsigned long long int j=x*y;
    
    cout<<j<<endl;
}