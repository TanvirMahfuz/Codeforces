#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;cin>>t;while(t--)
    {
        int n;cin>>n;
        int a;
        int i;
        set<int> st;
        for(i=0;i<n;i++)
        {
            cin>>a;
            st.insert(a);
        }
        int j=n-st.size();
        if(j%2==0)
        cout<<st.size()<<endl;
        else cout<<st.size()-1<<endl;
        
    }
}