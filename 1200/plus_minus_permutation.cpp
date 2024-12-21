#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y; 
        cin >> n >> x >> y;

        long long a = n/x;
        long long b = n/y;
        long long c = n/lcm(x,y);

        long long a1 = a - c;
        long long b1 = b - c;

        cout << (((n)*(n + 1))/2 - ((n - a1)*(n - a1 + 1))/2) - ((b1)*(b1 + 1))/2 << endl;    }
    return 0;
}