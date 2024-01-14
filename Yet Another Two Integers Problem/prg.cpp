#include <iostream>
using namespace std;
int main()
{
    int a, b, i, t,j;
    cin >> t;
   for(j=1;j<=t;j++)
    {
        cin >> a >> b;
        if (a > b)
            {swap(a, b);}
        i = (b - a) / 10;

        if ((b - a) % 10 > 0)
            {i++;}
        
        cout << i << endl;
    }
}