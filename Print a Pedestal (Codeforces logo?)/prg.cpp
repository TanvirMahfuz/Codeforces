#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[3];

        a[0]=n/3;
        a[1]=n/3;
        a[2]=n/3;
        if(n%3==0)
        {
           a[1]++;
           a[2]--;
        }
       else if(n%3==2)
       {
            a[1]=a[1]+2;
            a[0]=a[0]+1;
            a[2]=a[2]-1;
       }
       else if((n)%3==1)
       {
        a[1]=a[1]+2;
        a[2]=a[2]-1;
       }

        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }
}