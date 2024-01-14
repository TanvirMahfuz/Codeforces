#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();

int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n;cin>>n;
    int arr[n],i,j,first_digit,initial=0,flag=0,max_digit=1000000001;
    string s="1";
    rep(n)cin>>arr[i];
    
    first_digit=arr[0];
    initial=first_digit;
    
    for(i=1;i<n;i++){
        if(initial<=arr[i])
        {
            initial=arr[i];
            s.append("1");
        }
        else 
        {
            if(arr[i]>first_digit)
            {
                s.append("0");
            }
            else 
            {
                initial=arr[i];
                max_digit=first_digit;
                s.append("1");
                break;
            }
        }
    }
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<=max_digit and arr[j]>=initial)
        {
            initial=arr[j];
            s.append("1");
        }
        else 
        {
            s.append("0");
        }
    }
    cout<<s<<endl;
    return;
}

