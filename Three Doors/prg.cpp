#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    if(n==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else if(n=1)
    {
        if(a[0]==0)
        {
            cout<<"NO"<<endl;
            return;
        }
        else if(a[0]==2)
        {
            if(a[1]==0)
            {
                cout<<"NO"<<endl;
                return;
            }
            else if(a[1]==3)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
        else if(a[1]==3)
        {
            if(a[2]==0)
            {
                cout<<"NO"<<endl;
                return;
            }
            else if(a[1]==3)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    else if(n==2)
    {

    }
    else if(n==3)
    {

    }
}
int main()
{
    int t;cin>>t;while (t--)solve();
}