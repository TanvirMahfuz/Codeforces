#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();
vector<int> nonZeroElements(vector<int>& vec) {
    vector<int> result;

    for (int i=0;i<vec.size();i++) {
        if (vec[i] != 0) {
            result.push_back(vec[i]);
        }
    }

    return result;
}
int main()
{
    fast
    int t=1;while(t--)solve();
}
void solve()
{
    int n;cin>>n;n=n*2;
    int i,tot=0;
    vector <int> vec;

   rep(n){
    int x;cin>>x;vec.push_back(x);
   }
   sort(vec.begin(),vec.end());

    int arrSize=n;

        while(arrSize>2){
            vec = nonZeroElements(vec);
            vector <int> temp;
            for(i=1;i<n;i++)temp.push_back(vec[i]-vec[i-1]);
            int min =*min_element(temp.begin(),temp.end());
            cout<<"temp: ";
            rep(temp.size())cout<<temp[i]<<" ";
            cout<<endl;
            cout<<"vector: ";
            rep(vec.size())cout<<vec[i]<<" ";
            cout<<endl;
            cout<<"min: "<<min<<endl;
            for(i=1;i<vec.size();i++){
                if(arrSize==2)break;
                if(vec[i]-vec[i-1]==min){
                    
                    tot+=(vec[i]-vec[i-1]);
                    vec[i]=0;
                    vec[i-1]=0;
                    i++;
                    arrSize-=2;
                    
                }
            }
        }
    cout<<tot<<endl;
}

