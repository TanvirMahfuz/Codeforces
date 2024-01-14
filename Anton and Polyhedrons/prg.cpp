#include<iostream>
#define repeat(i,n) for(i=0;i<n;i++)
using namespace std;
int digit(string s);
int main()
{
    int n,i,sum=0;cin>>n;
    string s;
    repeat(i,n)
    {
        cin>>s;
        sum=sum+digit(s);
    }
    cout<<sum<<endl;
}
int digit(string s)
{
    if(s=="Tetrahedron")
        return 4;
    else if(s=="Cube")
        return 6;
    else if(s=="Octahedron")
        return 8;
    else if(s=="Dodecahedron")
        return 12;
    else if(s=="Icosahedron")
        return 20;
    else return 0;
}