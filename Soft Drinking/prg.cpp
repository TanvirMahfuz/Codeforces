#include<iostream>
using namespace std;
int mini(int a,int b,int c)
{
    int min=a;
    if(b<=min)
    min=b;
    if(c<=min)
    min=c;

    return min;
}
    
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>>np;
    int a=(k*l)/nl;
    int b = p/np;
    int m=c*d;
    cout<<mini(a,b,m)/n<<endl;
}