#include<stdio.h>
int main()
{
    int n,result;
    scanf("%d",&n);
    int i;
    i=n%5;
    n=n/5;

    if(i!=0)
        i=1;
    printf("%d\n",n+i);

}
