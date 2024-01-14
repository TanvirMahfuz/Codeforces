#include<iostream>
using namespace std;
int main()
{
    int n,a[3],i,j,c,count=0;
    cin>> n;
    for(i=0;i<n;i++)
    { c=0;
        for(j=0;j<3;j++)
        {
            cin>> a[j];
            c=c+a[j];
        }
        if(c>=2)
        count++;
        else continue;

    }
    cout<< count<<endl;

}