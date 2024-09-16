#include<iostream>
#include<vector>
#include<cmath>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    bool hasZero = false;
    int minEl=INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            hasZero = true;
            break;
        } else {
            minEl = min(minEl,abs(arr[i]));
        }
    }
    if(hasZero) cout << 0 << endl;
    else cout << minEl << endl;
    return 0;
}
