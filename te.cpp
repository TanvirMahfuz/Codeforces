#include <bits/stdc++.h>

using namespace std;

  
int main()
{
int arr[10]={1,2,3,3,5,6,7,8,9,10},i,size=10;
unordered_map <int,int> mp;
    for(i=0;i<size;i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        if(it.second>1) cout<< it.first;
    }
}
