#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        
        int sum = 0, negative_count = 0, min_abs_value = INT_MAX;

        // Read the grid and calculate the initial sum and other values
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                sum += abs(arr[i][j]);
                if (arr[i][j] < 0) {
                    negative_count++;
                }
                min_abs_value = min(min_abs_value, abs(arr[i][j]));
            }
        }

        // Adjust the sum if there are an odd number of negative elements
        if (negative_count % 2 == 1) {
            sum -= 2 * min_abs_value;
        }

        cout << sum << "\n";
    }

    return 0;
}
