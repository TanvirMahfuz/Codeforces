#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y)
{
 if (x==y) return true ;
 else return false;
}
int inputInt()
{
    int a;
    scanf("%d",&a);
    return a;
}
void print(int x)
{
    printf("%d",x);
}
void printstring(string s)
{
    cout<<s<<endl;
}
string inputstring()
{
    string s;
    cin>>s;
    return s;
}
void even(int a)
{
    bool x = check(a%2,0);
    if(x== true )
    {
        print (a);
        printstring(" is a true case");
    }
    else 
    {
        print (a);
        printstring(" is not an even case");
    
    }
    return ;
}
void odd(int a)
{
    bool x = check(a%2,1);
    if(x== true )
    {
        print (a);
        printstring(" is a true case");
    }
    else 
    {
        print (a);
        printstring(" is not an odd case");
    
    }
    return ;
}
int main()
{
    bool b;
    while (true)
    {
        printstring("input a number");
        int a = inputInt();
        g:
    printstring("check for even (proceed || No|| end)");
    string s = inputstring();
    if(s=="proceed" or s=="Proceed" or s=="yes" or s=="Yes" or s=="preceed" or s=="Proced" or s=="preced" or s=="proced")
        even(a);
    else if(s=="no" || s=="No")
        {
            printstring("check for odd (proceed || No || end)");
            s=inputstring();
    if(s=="proceed" or s=="Proceed" or s=="yes" or s=="Yes" or s=="preceed" or s=="Proced" or s=="preced" or s=="proced")
            odd(a);
            else if(s=="no" || s=="No") goto g;
            else if(s=="end") return 0;
            else continue;
        }
    else if(s=="end") return 0;
    else continue;
    }
    return 0;
}