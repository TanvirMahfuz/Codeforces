#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,i,max,min;
	cin>>n;int arr[n];
	for(i=0;i<n;i++)cin>>arr[i];

	cout<<*max_element(arr, arr + n)-*min_element(arr, arr + n)<<endl;;
	
}

int main() {
	int t;cin>>t;while(t--)solve();return 0;
}