#include<iostream>
using namespace std;
int main()
{
    int M,N,i,j;
    cin>>M>>N;
    int x=M*N;
    if(x%2==0)
    cout << x/2<<endl;
    else cout<< (x-1)/2<<endl;
}