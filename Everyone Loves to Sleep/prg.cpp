#include<iostream>
#include<vector>
using namespace std;

int hour[47]={0};
void initiate()
{
    for(int i=1;i<=23;i++)
    hour[i]=i;
    for(int i=24;i<47;i++)
    hour[i]=i-1;
}
void print()
{
    for(int i=0;i<47;i++)cout<<hour[i]<<" ";
}
void solve()
{
    int n,i,j,k,shortest=100;
    cin>>n;
    int h,m;
    cin>>h>>m;
    int x[n],y[n],z[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        if(x[i]<h)
        x[i]+=23;
        z[i]=x[i]-h;
    }
    vector<int> p;
    for(i=0;i<n;i++)
    if(z[i]<shortest)z[i]==shortest;
    for(i=0;i<n;i++)
    if(z[i]==shortest)
        p.push_back(i);
    int resh=shortest,resm=100000000;
    vector<int> q;
    for(i=0;i<p.size();i++)
    {
        if(y[p[i]]<m)
        {
            y[p[i]]+=60;
            resh++;
        }
        q.push_back(resh*60 + (y[p[i]]-m));
    }
    sort(q.begin() ,q.end());
    cout<<q[0]<<" "<<q[1]<<endl;
}
int main()
{
    int t;cin>>t;while(t--) solve();
    return 0;
}