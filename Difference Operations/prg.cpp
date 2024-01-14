#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j=0,sum=0;
        cin>>n;
        int a[n];
        cin>>a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%a[0]!=0)
                {
                    j=1;
                }
        }
            if (j==1)
                cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    return 0;
}