#include <bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}
int gcd(int a, int b) {
  if (b == 0) 
    return a;
  return gcd(b, a % b);
}

void solve()
{
    int n,odd=0,even=0;
    cin >> n;
    long long int arr[n];
    rep(n){
    cin >> arr[i];
    if(arr[i]%2==0)even++;
    else odd++;
    } 
    if(even>=1 && odd>=1){
        cout<<2<<endl;
    }
    else 
    {sort(arr,arr+n);
        long long int brr[n-1];
        rep(n-1){
            brr[i]=arr[i+1]-arr[i];
        }
       long long int g=brr[0];
        for(int i=1;i<n-1;i++){
            g=gcd(brr[i],g);
        }
        cout<<2*g<<endl;
    }
}
