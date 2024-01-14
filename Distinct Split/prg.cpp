#include <iostream>
using namespace std;

void solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
void solve()
{
    int arr[26] = {0};
    int ar[26] = {0};
    int l;
    cin >> l;
    int i = 0, j = l,di=0,dj=0;
    int cnt = 0;
    char flag = 'i';
    string s;
    cin >> s;
    while (i <= j)
    {
        if (flag == 'i')
        {
            if (arr[s[i] - 'a'] == 0)
            {
                cnt++;
                arr[s[i] - 'a']++;
                cout<<s[i]<<endl;
                i++;
            }
            else
            {
                di++;
                if(di<dj){i++;continue;}
                flag = 'j';
                j--;
               cout<<"flagged : "<<flag<<endl;
                continue;
            }
        }

        else if (flag == 'j')
        {
            if (ar[s[j] - 'a'] == 0)
            {
                cnt++;
                ar[s[j] - 'a']++;
                cout<<s[j]<<endl;
                j--;
            }
            else
            {
                dj++;
                if(di>=dj){j--;continue;}
                flag = 'i';
                cout<<"flagged : "<<flag<<endl;
                i++;
                continue;
            }
        }
    }
    cout << cnt << endl;
}
