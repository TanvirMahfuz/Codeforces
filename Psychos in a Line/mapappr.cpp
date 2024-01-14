#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;

void solve() {
    int n;
    cin >> n;
    stack<int> st;
    int vec[n];
    rep(n) {
        cin >> vec[i];
    }
    int i;
    int max_val = vec[0];
    int level = 0, max_level = 0;
    bool has_dec=false;
    int factor=0;
    unordered_map<int,int>mp;
    mp[vec[0]]=0;
    st.push(vec[0]);
    for(i=1;i<n;i++){
        if(vec[i]<vec[i-1]){
            mp[vec[i]]=1;
        }
        else if(vec[i]>max_val)
            {
                max_val=vec[i];
                mp[vec[i]]=0;
                st.push(vec[i]);
                cout<<"pushing "<<vec[i]<<endl;
            }
        else{
            mp[vec[i]]=mp[vec[i-1]]+1;
            while(!st.empty() and st.top()<vec[i]){
                cout<<"here is "<<vec[i]<<endl;
                
                    if(mp[st.top()]>mp[vec[i]])
                    {    
                        mp[vec[i]]=max(mp[vec[i]],mp[st.top()]+1);
                        st.pop();
                        st.push(vec[i]);
                        cout<<"pushing "<<vec[i]<<endl;
                    }
                    else {
                        st.pop();
                        st.push(vec[i]);
                        mp[vec[i]]++;
                    }
                }
                st.push(vec[i]);

        }
    }
    unordered_map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" -> "<<it->second<<endl;

    }
    return;
}

int main() {
    //fast
    int t = 1;
    while (t--) solve();
    return 0;
}
