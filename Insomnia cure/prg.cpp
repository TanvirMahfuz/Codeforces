#include<iostream>
#include<set>
using namespace std;
int main()
{
    int k,l,m,n,d,i,j=0;
    set<int>st;
    cin>>k>>l>>m>>n>>d;
    for(i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            st.insert(i);
        }
    }cout<<st.size()<<endl;
    return 0;
}