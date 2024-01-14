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
template <typename T>
void printStackElements(const std::stack<T>& myStack) {
    std::stack<T> tempStack = myStack;
    std::cout << "Stack elements (top to bottom): ";
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << std::endl;
}
int acount(int a, int b, int c){
    int mid=-1;
    while(mid!=0){
        int l=min(a,min(b,c));
        int r=max(a,max(b,c));
        mid=((a+b+c)-(l+r));
        a=abs(a-mid);
        b=abs(b-mid);
        c=abs(c-mid);
    }
    if(a==b and b==c and c==0)return 0;
    else if(a!=0) return 1;
    else if(b!=0) return 2;
    else if(c!=0) return 3;
    else return -1;
}
int main()
{
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int n; cin>>n;
    string s;cin>>s;
    int cnt=0,ans=0;
    rep(n){
        if(s[i]=='.'){//cout<<cnt+1<<endl;
        cnt++;
        if(cnt==3){
            cout<<2<<endl;
            return;
        }}
        else{
            ans+=cnt;
            //cout<<ans<<endl;
            cnt=0;
        }
    }
    cout<<ans+cnt<<endl;
}

