#include<iostream> 
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,h=0,l=101,avg;
    cin>>a;
    if(a>h)h=a;
    if(a<l)l=a;
    cin>>b;
    if(b>h)h=b;
    if(b<l)l=b;
    cin>>c;
    if(c>h)h=c;
    if(c<l)l=c;
    cout<<h-l<<endl;
    return 0;
}