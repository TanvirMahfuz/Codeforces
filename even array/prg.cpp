#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int i,oa=0,ea=0;
    for(i=0; i<n; i++) {
        cin>>arr[i];
        if((arr[i]%2 == 0) and (i%2 ==1) )
            oa++;
        else if((arr[i]%2 == 1)and(i%2==0))
            ea++;
        else continue;
    }

    if(ea==oa)cout<<oa<<endl;
    else cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}