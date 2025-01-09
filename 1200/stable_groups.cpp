#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k, x;
    cin >> n >> k >> x;

    long long count = 1;
    vector<long long> arr(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin() + 1, arr.begin() + n + 1);

    vector<long long> need;

    for (int i = 1; i < n; i++) {
        long long gap = arr[i + 1] - arr[i];
        if (gap > x) {
            count++;
            need.push_back(gap - 1);
        }
    }

    sort(need.begin(), need.end());

    for (long long merge : need) {
        long long groupsToMerge = merge / x;
        if (groupsToMerge <= k) {
            count--;
            k -= groupsToMerge;
        } else {
            break;
        }
    }

    cout << count << endl;
    return 0;
}
