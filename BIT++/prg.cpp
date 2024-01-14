#include<iostream>
using namespace std;
int main()
{
    int x=0,n,i;
    cin>>n;
    getchar();
    string ch;
    for(i=1;i<=n;i++)
    {
        cin>> ch;
        if(ch=="X++")
         x++;
        else if(ch=="++X")
         ++x;
        else if(ch=="X--")
        x--;
        else if(ch=="--X")
        --x;
    }
    cout<< x;
    
    
}