#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> a;
    int n;

    for(int i=0;i<3;i++){
      cin>>n;
      a.insert(n);
    }

    cout << *a.rbegin();
    return 0;
}