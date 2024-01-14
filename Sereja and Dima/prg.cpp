#include<iostream>

using namespace std;
int main()
{
    int a=0,i,b=0,n,j,k=0;;
    cin>>n;
    j=n-1;
    int arr[n];
    for(i=0; i<n; i++)cin>>arr[i];
    i=0;
    while(i<=j) {

        if(k%2==0) {
            if(arr[i]>arr[j]) {
                a+=arr[i];
                i++;
            } else {
                a+=arr[j];
                j--;
            }

        } else {
            if(arr[i]>arr[j]) {
                b+=arr[i];
                i++;
            } else {
                b+=arr[j];
                j--;
            }
        }
        k++;
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}