#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    vector<int> xors(3e5 + 10);
    xors[0] = 0;
    
    for (int i = 1; i < xors.size(); i++) {
        xors[i] = xors[i - 1] ^ i;
    }

    while (t--) {
        int a, b;
        cin >> a >> b;

        int x = xors[a - 1];  

        if (x == b) {
            cout << a << endl;
        } else if ((x ^ b) == a) {
            cout << a + 2 << endl;
        } else {
            cout << a + 1 << endl;
        }
    }
    return 0;
}
