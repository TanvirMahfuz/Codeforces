#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;
void solve();
int sumOfN(int n){
    n=abs(n);return ((n-1)*n)/2;
}
vector<int> createVector(int n) {
    vector<int> myVector;rep(n)cin>>myVector[i];return myVector;
}
int maxSubarraySum(const std::vector<int>& arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];
     for (size_t i = 1; i < arr.size(); ++i) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }return maxSum;
}

int main()
{
    int t;cin>>t;while(t--)solve();
}
char VC(char ch){
    if(ch=='b'|| ch=='c'||ch=='d')return 'C';
    else return 'V';
}

void solve()
{
  int n;cin>>n;
  vector<pair<char,char> >s(n);
  rep(n){
    cin>>s[i].first;s[i].second=' ';
  }
  bool vflag=false,cflag=false;
  for(int i=n-1;i>0;i--){
    if(VC(s[i].first)=='V'){
        vflag=true;
        cflag=false;
    }
    else{
        if(vflag){
            s[i].second='.';
            vflag=false;
            cflag=false;
        }
        else cflag=true;
    }
  }
  rep(n){
    if(s[i].second=='.')cout<<'.';
    cout<<s[i].first;
  }
  cout<<endl;
}
