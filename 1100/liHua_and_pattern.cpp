#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        vector<vector<int>> x(a + 1, vector<int>(a + 1, 0));

        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= a; j++) {
                cin >> x[i][j];
            }
        }

        int sum = 0;
        for (int i = 1; i <= a; i++) {
            for (int j = 1; j <= a; j++) {
                // Corrected symmetry condition
                if (x[i][j] != x[a - i + 1][a - j + 1]) {
                    sum++;
                }
            }
        }

        // Divide sum by 2 as changes are counted twice
        sum /= 2;

        if (sum > b) {
            cout << "NO" << endl;
            continue;
        }

        b -= sum;
        if (a % 2 == 1 || b % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
