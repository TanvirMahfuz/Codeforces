#include<bits/stdc++.h>

using namespace std;
void solve()
{
    vector <int> st;
    int i,j,k;
    for(i=0;i<=1666;i++)
    {
            if(i%10==3 || i%3==0)
                continue;
            else st.push_back(i);
    }
    cin>>j;
    cout<<st[j-1]<<endl;

}
int main()
{
    int t;cin>>t;while(t--)solve();
}