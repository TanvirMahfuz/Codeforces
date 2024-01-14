#include<bits/stdc++.h>

using namespace std;
void solve();

int main() {
    int t;
    cin >> t;while (t--) {solve();}
}
void solve() {
    int n, k, i,bmax=-1,sum=0;
    cin>>n>>k;
    int a[n],b[n];
    vector<int> path;
    for(i=0;i<n;++i)cin>>a[i];
    
    for(i=0;i<n;i++){
        cin>>b[i];
        (b[i]>bmax)? bmax=b[i]:b[i]=bmax;
    }

    for(i=0;i<n;i++){k--;
        if(k<0)break;
        sum+=a[i];
        path.push_back(sum+b[i]*k);
    }
    cout<<*max_element(path.begin(),path.end())<<endl;
    return;
}
