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
    for (i = 1; i < n; i++) {
        //increase
        if (vec[i] > vec[i - 1]) {
           mp[vec[i]]=mp[vec[i-1]];
           cout<<"mapping "<<vec[i]<<" = "<<mp[vec[i]]<<endl;
            std::cout << "will increase.." << endl;
            if (vec[i] > max_val) {
                std::cout << "  In maximum.." << endl;
                while (!st.empty()) {
                    st.pop();
                    level=++mp[vec[i]];
                    
                }
                st.push(vec[i]);
                max_val = vec[i];
                level--;
                std::cout << "    decreasing level..." << endl;
                max_level = max(mp[vec[i]]+1, max_level);
                std::cout << "    increasing level..+"<<level << endl;
            } else {
                std::cout<<"  not in max"<<endl;
                while (!st.empty() && st.top() < vec[i]) {
                    std::cout<<"   tos= "<<st.top()<<" while vec[i]= "<<vec[i]<<endl;
                    level=++mp[vec[i]];
                    st.pop();
                }
                st.push(vec[i]);
                std::cout<<"    pushed to stack.."<<endl;
                max_level = max(mp[vec[i]]+1, max_level);
                std::cout << "    increasing level..+"<<mp[vec[i]]+1 << endl;
            }
        }
        //decrease
        else {
            has_dec=true;
            level=1;
            mp[vec[i]]=level;
            max_level = max(level, max_level);
        }
    }

    if(!st.empty() and st.top()!=max_val){
        std::cout<<"last time..."<<endl;
        while (!st.empty() and st.top()<max_val) {
                    st.pop();
                    level= mp[vec[i]]+1;
                    std::cout << "    increasing level..+"<<level << endl;
                }max_level = max(level, max_level);
    }
    
    std::cout << max_level << endl;
    return;
}

int main() {
    //fast
    int t = 1;
    while (t--) solve();
    return 0;
}
