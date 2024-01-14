#include<iostream> 
using namespace std;
int main()
{
    int t;
    cin>>t;s:
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int i,j=0,k,l=0;
        long long int suma=0,sumb=0,diff=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            
            suma=suma+a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            
            if(a[i]<b[i])
            sumb=-1;
            else 
            {
                sumb=sumb+b[i];
            }
            
        }
        if (sumb==-1)
        {
            cout<<"NO"<<endl;
            goto s;
        }
        else if (sumb==0)
            {
                cout<<"YES"<<endl;
                goto s;
            }

        k=0;
        for(i=0;i<n;i++)
        {
            if(k<(a[i]-b[i]))
            {
                k=a[i]-b[i];
            }
            else continue;
        }
        cout<<k<<endl;
        for(i=0;i<n;i++)
        {
            if(k<(a[i]-b[i]))
            {
                if(b[i]==0)
                continue;
                else 
                {
                    l=1;
                    break;
                }
            }
            else continue;
        }
        if(l==0)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}