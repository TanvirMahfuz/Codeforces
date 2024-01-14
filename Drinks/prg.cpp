#include<iostream>
#define repeat(i,n) for(int i=0;i<n;i++)
#include <iomanip>
using namespace std;
int main()
{
    double n,x,avg,i=0;
    cin>>n;
    repeat(i,n)
    {
        double a;cin>>a;
        avg=avg+a;
    }
    avg=avg/n;
    printf("%.12lf\n",avg);

}