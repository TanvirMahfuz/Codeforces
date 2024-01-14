#include<iostream>
using namespace std;
int search1(int a[5000],int n)
{
    int i,k=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            k=i;
            break;
        }
    }
    return k;
}

int search2(int a[5000],int n)
{
    int i,k=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            k=i;
            break;
        }
    }
    return k;
}

int search3(int a[5000],int n)
{
    int i,k=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==3)
        {
            k=i;
            break;
        }
    }
    return k;
}


int main()
{
    int a[5000],n,i,j,k,c,b,m[3]={0,0,0};
    cin>>n;
    for(i=0;i<n;i++)
    {   
        cin>>a[i];
        if(a[i]==1)
        m[0]++;
        else if(a[i]==2)
        m[1]++;
        else if(a[i]==3)
        m[2]++;
    }
    if(m[0]<m[1])
    {
        if(m[0]<m[2])
        k=m[0];
        else
        k=m[2];
    }
    else
    {
        if(m[1]<m[2])
        k=m[1];
        else 
        k=m[2];
    }
    cout<<k<<endl;

    while(k--)
    {
        m[0]=search1(a,n)+1;
            a[m[0]-1]=0;
        m[1]=search2(a,n)+1;
            a[m[1]-1]=0;
        m[2]=search3(a,n)+1;
            a[m[2]-1]=0;

        cout<<m[0]<<" "<<m[1]<<" "<<m[2]<<endl;
       
    }
    
}