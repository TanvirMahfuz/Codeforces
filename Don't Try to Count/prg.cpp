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
    int i , j ,k,n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    int ans=0,l=m;
    int s1_start=-1,s2_start=0;
    while(l!=0){
        

        s1_start++;
        if(s1_start==s1.size()){
              s1+=s1;ans++;cout<<ans<<"th add\n"<<s1<<endl;
            }
        cout<<"s1:"<<s1[s1_start]<<" s2: "<<s2[s2_start]<<endl;
        if(s1[s1_start]==s2[s2_start]){
            cout<<"its a match....\n";
            l--;s2_start++;
        }
        else{cout<<"mismatch...";
            if(ans>1){
                cout<<-1<<endl;return;
            }
            else {
                s2_start=0;
                s1_start-=m-l;
                l=m;
                
                cout<<"----- s1.start= "<<s1_start<<endl;
            }
        }
        
    }
    cout<<ans<<endl;
}
