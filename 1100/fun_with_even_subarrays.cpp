#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int steps = 0;
        int groupSize = 1; // Initially, the group size is 1 (last element).
        int i = n - 2;     // Start from the second last element.

        while (i >= 0) {
            if (arr[i] == arr[n - 1]) {
                groupSize++;
                i--;
            } else {
                // Increment the step count and double the group size
                steps++;
                i -= groupSize;
                groupSize *= 2;
            }
        }

        if (groupSize < n) steps++; // Add the last step if required.
        cout << steps << endl;
    }
    return 0;
}
