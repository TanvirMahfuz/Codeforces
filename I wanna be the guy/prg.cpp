#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],p,q;
    for(i=0;i<n;i++)
    a[i]=0;
    cin>>p;
    int b[p];
    for(i=0;i<p;i++)
    {
        cin>>b[i];
        a[b[i]-1]=b[i];
    }

    cin>>q;
    int c[q];
    for(i=0;i<q;i++)
    {
        cin>>c[i];
        a[c[i]-1]=c[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
        else 
        continue;
    }
    cout<<"I become the guy."<<endl;

}