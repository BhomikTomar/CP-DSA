#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumTankSize(int n, int x, vector<int>& stations) {
    int maxDist = stations[0];
    for (int i = 1; i < n; i++) {
        maxDist = max(maxDist, stations[i] - stations[i - 1]); 
    }
    maxDist = max(maxDist, 2*(x - stations[n - 1]));
    return maxDist;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n, x;
        cin >> n >> x; 
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        cout << minimumTankSize(n, x, stations) << endl;
    }
    return 0;
}
