#include <iostream>
#include <vector>

using namespace std;

int N = 1e6 + 5;
vector<int> pos(N);

void precompute() {
    for (long long k = 2; ; k++) {
        long long int tot = 1 + k + k * 1LL * k;
        long long int x = k * k;

        if (tot > N) {
            break;
        }

        while (tot < N && tot > 0) {
            pos[tot] = 1;
            tot += x * k;
            x *= k;
        }
    }
}

int main() {
    precompute();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (pos[n]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}