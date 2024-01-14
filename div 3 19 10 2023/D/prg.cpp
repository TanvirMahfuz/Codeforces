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
}

void solve() {
    int n, k, i, j;
    cin >> n;
    vector<pair<int, int> > a;
    vector<pair<int, int> > b;
    vector<pair<int, int> > c;

    rep(n) {
        int x;
        cin >> x;
        a.push_back(make_pair(x, i));
        cin >> x;
        b.push_back(make_pair(x,i));
        cin >> x;
        c.push_back(make_pair(x,i));
    }
    sort(a.begin(),a.end());sort(b.begin(),b.end());sort(c.begin(),c.end());
    rep(n) {
        cout << a[i].first<<" " <<a[i].second << endl;
    } 
    for(i=n-1;i>=0;i--){
        if(a[i].second!=b[i].second and a[i].second!=b[i].second and b[i].second!=c[i].second)
        {cout<<a[i].first+b[i].first+c[i].first<<endl;return;}
        else {
            if(a[i].second==b[i].second){
                if(a[i].second==c[i].second){
                    
                }
            }
        }
    }
}
