#include<iostream>
#define repeat(i,n) for(i=0;i<n;i++)
using namespace std;
void solve()
{
     int a,n,i,high,low,count=0;
    cin>>n;
    cin>>a;high=a;low=a;
    n--;
    repeat(i,n)
    {
        cin>>a;
        if(a>high)
        {
            count++;high=a;
        }
        else if(a<low)
        {
            count++;low=a;
        }
    }
    cout<<count<<endl;
}
int main()
{
   solve();
    return 0;
}