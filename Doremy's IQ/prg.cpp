#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,o,q;
        cin>>n>>q;
        vector<char> st;
        int a[n];
        
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]>q || q<=0)
                {
                    st.push_back('0');
                    q--;
                }
                else if(a[i]<=q && q>0)
                {
                    st.push_back('1');
                }
                cout<<st[i];
            }
            cout<<endl;

        
    }
}