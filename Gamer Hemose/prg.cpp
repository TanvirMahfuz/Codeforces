#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int b = 0, c = 0, h, n, i, j, k = 0, l;
    
    long long int t;
    cin>>t;
    while(t--)
    {
        cin >> n >> h;
        long long int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > c)
            {
                c = a[i];
                j = i;
            }
        }
        a[j] = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] > b)
            {
                b = a[i];
            }
        }
        while (h > 0)
        {
            h = h - c;
            k++;
            if (h <= 0)
                break;
            else
            {
                h = h - b;
                k++;
            }
        }

        cout << k<<endl;
        k=0;c=0;b=0;
    }

    return 0;
}