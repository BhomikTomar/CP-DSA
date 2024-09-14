#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> efficiencies(n - 1);
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            cin >> efficiencies[i];
            sum += efficiencies[i];
        }
        cout << -sum << endl;
    }
    return 0;
}
