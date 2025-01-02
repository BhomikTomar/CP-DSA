#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);
        int total_sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total_sum += arr[i];
        }

        if (total_sum < s) {
            cout << -1 << endl;
            continue;
        }

        if (total_sum == s) {
            cout << 0 << endl;
            continue;
        }

        int max_len = 0, curr_sum = 0, left = 0;

        for (int right = 0; right < n; right++) {
            curr_sum += arr[right];

            while (curr_sum > s) {
                curr_sum -= arr[left];
                left++;
            }

            if (curr_sum == s) {
                max_len = max(max_len, right - left + 1);
            }
        }

        cout << (n - max_len) << endl;
    }

    return 0;
}
