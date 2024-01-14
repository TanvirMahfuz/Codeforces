#include<iostream>
using namespace std;
string s[36]={"1","11","111","1111","2","22","222","2222","3","33","333","3333","4","44","444","4444","5","55","555","5555","6","66","666","6666","7","77","777","7777","8","88","888","8888","9","99","999","9999"};
int a[36];
void solve()
{
    int i,cx=0;
    string x;
    cin>>x;
    for(i=0;i<36;i++)
    {
        if(x==s[i])cx=i;
    }
    cout<<a[cx]<<endl;
    return ;
}
int main()
{
    
    int sum=0,i,j,k=0;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=4;j++)
        {
            sum=sum+j;
            a[k]=sum;
            k++;
        }
    }

    int t;cin>>t;while(t--)solve();
    return 0;

}