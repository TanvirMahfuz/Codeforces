#include<bits/stdc++.h>
using namespace std;
void solve();
int fsize=0;
bool change=false;
void printStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
stack<int> reverseStack(stack<int> st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    return temp;
}
int main()
{
    int n,i,j;
    cin>>n;
    vector<int>vec;
    for(i=0;i<n;i++){
        int a;cin>>a;vec.push_back(a);
    }
    stack<int>st;
    int level=0,maxlvl=0;
    int h=0,maxh=vec[0];
    st.push(vec[0]);
    int stacksize=1;
    for(i=1;i<n;i++){
       if(vec[i]<st.top()){
        st.push(vec[i]);
       }
       else{
       }
    }
}