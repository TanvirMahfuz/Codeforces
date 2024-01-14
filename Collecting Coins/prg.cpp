#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>vec;
void solve();
int main()
{
    int t;
    int i,j,k;
    for(i=1;i<1000000000;i*=10)
    {
        for(j=1;j<10;j++)
        {
            vec.push_back((i*10)+j);
            i++;
        }
    }
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{
    long long  int arr[3],n;
    cin>>arr[0]>>arr[1]>>arr[2]>>n;
    sort(arr,arr+3);
    int x=(n-((arr[2]-arr[1])+(arr[2]-arr[0])));
    (x>=0 and x%3==0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    return;
}
