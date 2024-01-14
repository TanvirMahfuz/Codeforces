#include<bits/stdc++.h>
#define rep(n) for(int i=0;i<n;i++)
#define yes "yes\n"
#define no "no\n"
using namespace std;

void printmap(map<int,int> &m)
{
    map<int,int> ::iterator it;
   for(it = m.begin();it!=m.end();++it)
   {
    cout<<(*it).first<<" "<<(*it).second<<endl;
   }
}
int input()
{
    int a;cin>>a;return a;
}
void solve()
{
    vector<int>vec;
    int n=input();
    int arr[n],i,j=n-1,min=10000000,pos=n-1;
    rep(n-1){
        arr[i]=input();
        if(arr[i]<=min)
        {min=arr[i];pos = i;}
    }
    rep(n-1){
        vec.push_back(arr[i]);
        if(i==pos){
            vec.push_back(min);
        }
    }
    
    rep(n-1)
    {
        if(max(vec[i],vec[i+1])!=arr[i]){
            int a=max(vec[i],vec[i+1]);
            if(vec[i]==a)vec[i]=min;
            else vec[i+1]=min;
        }
        
        cout<<vec[i]<<" ";
    }
    cout<<vec[n-1]<<endl;
    return;

}
int main()
{
    int t;cin>>t;while(t--)solve();
}
