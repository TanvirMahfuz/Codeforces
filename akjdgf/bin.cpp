#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> vec;
    while (n>0)
    {
        vec.push_back(n%2);
        n=n/2;
    }
    reverse(vec.begin(), vec.end());
    for(int i=0;i<vec.size();cout<<vec[i++]);
}