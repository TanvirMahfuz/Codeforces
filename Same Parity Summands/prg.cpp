#include<iostream> 
#include<vector>
using namespace std; 

void solve()
{
    int i,j,k,n;
    cin>>n>>k;
    vector<int> st;
    if(n%k==0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k;i++)
            st.push_back(n/k);
        
        }
    else 
    {
        
    }
    for(i=0;i<k;i++)
    cout<<st[i]<<" ";
    cout<<endl;
    return;

}
int main()
{
    int t;cin>>t;while (t--)solve();
}