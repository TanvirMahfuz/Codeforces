#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();
int fsize=0;
bool change=false;
int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
bool isPrime(int number) {

    if (number <= 3) {
        return true; // 2 and 3 are prime numbers
    }

    // Check if the number is divisible by 2 or 3
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    // Check for prime numbers using 6k +/- 1 optimization
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
void solve()
{
    int l,r,i;cin>>l>>r;
    if(l==r and isPrime(l)){cout<<-1<<endl;return;}
    else{
        while(isPrime(l))l++;
        if(l>r){cout<<-1<<endl;return;}
        else{
            if(l%2==0)cout<<2<<" "<<l-2<<endl;
            else {
                for(i=3;i<=sqrt(l);i+=2){
                    if(l%i==0){
                       cout<<l-i<<" "<<i<<endl;break;
                    }
                }
            }
        }
       
    }
    
   return;
}
