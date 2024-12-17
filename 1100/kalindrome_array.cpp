#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(vector<int>& arr, int x) {
    int n = arr.size(), i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] == x) {
            i++;
        } 
        else if (arr[j] == x) {
            j--;
        } 
        else if (arr[i] != arr[j]) {
            return false;
        } 
        else {
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) cin >> arr[i];

        bool flag = true;

        for (int i = 0; i < n - 1 - i; i++) {
            if (arr[i] != arr[n - 1 - i]) {
                flag = checkPalindrome(arr, arr[i]) || checkPalindrome(arr, arr[n - 1 - i]);
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
