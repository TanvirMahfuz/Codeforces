#include <iostream>
#include <set>
#include<vector>
#include<iomanip>
#include <math.h>
#include<string>
#include<algorithm>
#define rep(n) for(int i=0;i<n;i++)
#define pb push_back
using namespace std;
vector <int> vec,v,v1;
set <int> st;

int input()
{
    int a;
    cin>>a; 
    return a;
}
void print(int n)
{
    printf("%d\n",n);
}

string inputstring()
{
    string s;
    cin>>s;
    return s;
}


void solve();
int main()
{
    int t=input();
    while(t--)
    solve();
    return 0;
}
void solve()
{
    int n=input();
    rep(n)
    {
        int a=input();
        vec.pb(a);
        st.insert(a);
    }
    sort(vec.begin(),vec.end());
    rep(n)
    {
        if(i==0)continue;
        if(vec[i]==vec[i-1])
        {
            v.pb(vec[i]);
        }
    }
    if(v.size()==0)
    {
        int x=vec[1]-vec[0];
        int index=0;
        rep(n-1)
        {
            if((vec[i+1]-vec[i])<x)
            {
                x=vec[i+1]-vec[i];
                index=i;
            }
        }
        cout<<"||"<<vec[index+1]-vec[index]<<endl;
        return ;
    }

    rep(v.size())cout<<v[i]<<" ";
    int max=*max_element(v.begin(),v.end());
    int lim=0;
    for(set<int>::iterator it = st.begin();it!=st.end();++it)
    {
        if(*it>=max)
        {
            lim = *it;
            break;
        }
    }
    cout<<lim-max<<endl;
}