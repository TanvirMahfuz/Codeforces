#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int sum[n],sm=0;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sm+=arr[i];
            sum[i]=sm;
        }
        
        int max_sum = arr[0];
        int current_sum = arr[0];

        for (int i = 1; i < n; ++i) {
            if ((arr[i] % 2 == 0 && arr[i - 1] % 2 == 0) || (arr[i] % 2 == 1 && arr[i - 1] % 2 == 1)) {
                current_sum = max(arr[i], current_sum + arr[i]);
            } else {
                current_sum = arr[i];
            }

            max_sum = max(max_sum, current_sum);
        }

        cout << max_sum << endl;
    }

    return 0;
}
