#include <iostream>
using namespace std;
int checkprime(int a);
int main()
{
    int a=4, b, c = 1, n, i, k;
    cin >> n;
    while (c)
    {
        b = n - a;
        i = checkprime(a);
        k = checkprime(b);
        if (i == 1 && k == 1)
        {
            cout<<a<<" "<<b<<endl;
            c=0;
        }
        else 
        {
            a++;
        }
    }
}
int checkprime(int a)
{
    int i, c = 0;
    for (i = 2; i <=a / 2; i++)
    {
        if (a % i == 0)
        {
            c++;
            break;
        }
        else
            continue;
    }

    return c;
}
