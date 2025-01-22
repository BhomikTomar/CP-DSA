#include <bits/stdc++.h>
using namespace std;
void getPrime(long long p, map<long long, long long> &ma) {
    while (p % 2 == 0) {
        ma[2]++;
        p /= 2;
    }

    for (long long i = 3; i <= sqrt(p); i += 2) {
        while (p % i == 0) {
            ma[i]++;
            p /= i;
        }
    }

    if (p > 1) {
        ma[p]++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        map<long long, long long> ma;
        long long n, b, flag = 0;

        cin >> n;
        for (long long i = 0; i < n; i++) {
            cin >> b;
            getPrime(b, ma); 
        }

        for (auto it = ma.begin(); it != ma.end(); it++) {
            if ((it->second) % n != 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
