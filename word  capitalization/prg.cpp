#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    int i;
    char s[1000];
    gets(s);
    i=s[0];
    if(i>=97 && i<=122)
        i=i-32;
    s[0]=i;

    puts(s);
}