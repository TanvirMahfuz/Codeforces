#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();
int nerman(int n)
{
    n=abs(n);
    return ((n-1)*n)/2;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{

    int n,k,i,j;
    cin>>n>>k;
    int arr[n];
    vector<int>vec,v;
    map<int,int>m;
    {
        cin>>arr[i];
        m[i]=arr[i];
    }
    sort(arr,arr+n);
     map<int,int>::iterator it;
    i=0;
    for(it = m.begin();it != m.end(); ++it)
    {
            vec.push_back(abs((*it).first -arr[i]));i++;
    }
    rep(vec.size())cout<<vec[i]<<" ";
}
