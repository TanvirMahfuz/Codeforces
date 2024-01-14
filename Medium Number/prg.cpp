#include <iostream>
#include<algorithm>
using namespace std;
#include<vector>
void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<arr[1]<<endl;
    return;
}
