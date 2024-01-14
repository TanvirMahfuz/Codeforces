#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,i,j,k;
        long int n=1;
        cin>>m;
        while(n<=m)
        {
            n=n*10;
        }
        n=n/10;
        cout<<m-n<<endl;
    }
}