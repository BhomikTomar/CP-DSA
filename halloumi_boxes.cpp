#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t, k, m;
    cin >> t;
    while (t--) {
        cin >> m >> k;
        vector<int> arr(m);
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        if (k==1 && !is_sorted(arr.begin(),arr.end())) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}