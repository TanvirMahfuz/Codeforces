#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long 
using namespace std;
void solve();
int findSmallest(int a, int b, int c) {
    // Using the ternary operator to find the minimum among three numbers
    int smallest = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    return smallest;
}

int main() {
    fast
    int t;cin>>t;
    while (t--) solve();
    return 0;
}
void solve(){
    int i,n,m,j;cin>>n>>m;
    string a,t;
    cin>>a>>t;

    bool typeoo=false,typezz=false;
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            if(a[i]=='1')typeoo=true;
            else typezz=true;
        }
    }
    if(typeoo and typezz){
        cout<<"No"<<endl;return;
    }
    else if(!typeoo and !typezz){
        cout<<"Yes"<<endl;return;
    } 

    for(i=1;i<m;i++){
        if(t[i]==t[i-1]){
            cout<<"No"<<endl;return;
        }
    }
    bool solvableoo=false,solvablezz=false;
    if(t[0]=='1' and t[m-1]=='1')solvablezz=true;
    else if(t[0]=='0' and t[m-1]=='0')solvableoo=true;
    else{
        cout<<"No"<<endl;return;
    }

    if(typeoo and solvableoo){
        cout<<"Yes"<<endl;
    }
    else if(typezz and solvablezz){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }

}