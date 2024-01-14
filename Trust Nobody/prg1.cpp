#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long 
using namespace std;
void solve();
int main() {
    fast
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
void solve(){
    int n; // Number of people
    cin >> n;

    vector<int> liars(n); // To store the number of liars each person claims
    vector<int> truthTellers(n, 0); // To store the number of truth-tellers each person claims

    // Input the statements of each person
    for (int i = 0; i < n; ++i) {
        cin >> liars[i];
    }

    // Construct the constraint system and check for contradictions
    int totalLiars = 0;
    for (int i = 0; i < n; ++i) {
        totalLiars += liars[i];
        truthTellers[i] = n - liars[i];
        if (totalLiars > n) {
            cout <<-1<<endl;
            return ;
        }
    }

    // Output the result
    cout <<totalLiars << endl;

    return ;
}

  
