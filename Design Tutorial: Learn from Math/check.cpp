#include <iostream>
using namespace std;
int checkprime(int a);
int main()
{
    int a=4, b, c = 1, n, i, k;
    cin >> n;
    b=checkprime(n);
    cout<<b;
    
}
int checkprime(int a)
{
    int i, c = 0;
    for (i = 2; i <= a / 2; i++)
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
