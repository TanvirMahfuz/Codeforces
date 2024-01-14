#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;cin>>t;while(t--)solve();
}
void print(int n)
{
    cout<<"invoked "<<n<<endl;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>vec;
    bool flag = true;
    int i,k,j;
    while(k<40 and n>1)
    {
        if(n%2==0){
            cout<<-1<<endl;return;
        }
        k++; 
        if((((n-1)/2)%2)==1)
        {
            vec.push_back(2);
            n=(--n)/2;
        }
        else if(((n+1)/2)%2==1)
        {
            vec.push_back(1);
            n=(++n)/2;
        }
    }
    reverse(vec.begin(),vec.end());
    if(n==1)
    {
        cout<<vec.size()<<endl;
        for(i=0;i<vec.size();i++)cout<<vec[i]<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
}
