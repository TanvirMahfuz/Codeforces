#include<iostream>
using namespace std;
int main()
{
    int k,n,w,x,y;
    cin>>k>>n>>w;
    x=(w*(w+1))/2;
    y=k*x;
    if(y>n)
    cout<<y-n<<endl;
    else cout<<0<<endl;

}