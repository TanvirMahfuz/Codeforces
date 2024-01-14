#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long 
using namespace std;
void solve();
int sumOfDigits(int number) {
    int sum = 0;

    // Take the absolute value to handle negative numbers
    number = abs(number);

    while (number > 0) {
        sum += number % 10; // Add the last digit to the sum
        number /= 10;       // Remove the last digit
    }

    return sum;
}
int main() {
    fast
    int t;cin>>t;
    while (t--) solve();
    return 0;
}
void solve(){
    ll int n,i,k;cin>>n>>k;
    while(sumOfDigits(n)%k!=0)n++;
    
    cout<<n<<endl;
}
