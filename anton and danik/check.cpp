#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c;
    int n,i,a=0,d=0;
    cin>>n; 
    getchar();
    while(n--)
    {
        scanf("%c",&c);
        if(c=='A')
            a++;
        else d++;
    }

    if(a>d)
    cout<<"Anton";
    else if(a<d)
    cout<<"Danik";
    else
    cout<<"Friendship"<<endl;
}