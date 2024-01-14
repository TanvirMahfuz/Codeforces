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
    int i,n;cin>>n;
    int one=0,onecnt=0;
    int two=0,twocnt=0;
    int arr[n];
    bool end=false;
    rep(n){
        cin>>arr[i];
        if(i==0){one=arr[0];onecnt++;}
        else {
            if(arr[i]==one)onecnt++;
            else{
                if(two==0){two=arr[i];twocnt++;}
                else{
                    if(arr[i]!=two){
                        end=true;
                    }
                    else{
                        twocnt++;
                    }
                }
            }
        }
        
    }
    if(end){cout<<"no\n";return;}
    if(onecnt==0 or twocnt==0)cout<<"yes\n";
    else{
        if(onecnt==twocnt)cout<<"yes\n";
        else if(onecnt==twocnt-1)cout<<"yes\n";
        else if(twocnt==onecnt-1)cout<<"yes\n";
        else cout<<"no\n";
    }
    //sort(arr,arr+n);
    
}

