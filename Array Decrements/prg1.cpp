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
        int i,j=0,k=0,l=0;
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
            {sumb=-1;break;}
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

        for(i=0;i<n;i++)
        {
            if(b[i]==0)
            continue;
            else 
            {
                k=a[i]-b[i];
                break;
            }
        }
        int temp=0;
        for(i=0;i<n;i++)
        {
            if(b[i]==0)
            continue;
            else 
            {
                temp=a[i]-b[i];
                if(k<temp)
                {
                    k=temp;
                }
            }
        }
        //cout<<temp<<endl;
        for(i=0;i<n;i++)
        {
            k=a[i]-temp;
            if(b[i]==0)
            {
                if(k>0)
                {l=1;break;}
            }
            else
            {
                if(k>b[i])
                {l=1;break;}
            }
        }
        if(l==0)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}