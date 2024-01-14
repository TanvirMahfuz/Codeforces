#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
using namespace std;

void solve();

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve() {
    int n, k;
    cin >> n;

    vector<int> arr, vec;
    set<int> st;
    rep(n) {
        int x;cin>>x;
        arr.push_back(x);
        st.insert(x);
    }

    set<int>::iterator it;
    for (it = st.begin(); it != st.end(); ++it) {
        vec.push_back(*it);
        //cout<< *it <<endl;
    }

    rep(vec.size()) cout << vec[i] << " ";
    cout << endl;

    reverse(vec.begin(),vec.end());
    cout<<vec.back()<<endl;
    rep(n){
        if(arr[i]==vec.back()){
            vec.pop_back();
        }
        else{
            
        }
    }


}
