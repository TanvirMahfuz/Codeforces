#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0,high=0;
    cin>>n;
    while(n--){
        cin>>a>>b;sum=sum+(b-a);
        if(sum>high) high=sum;
    }cout<<high<<endl;
    return 0;
}
