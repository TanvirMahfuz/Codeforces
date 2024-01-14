#include<iostream>
#include<vector>
using namespace std;
void solve ()
{

}
int main()
{
    int t;cin>>t;
    int m=0,c=0;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)m++;
        else if (a<b) c++;
        else continue;
    }
    if(m>c)cout<<"Mishka"<<endl;
    else if(m<c)cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;
}