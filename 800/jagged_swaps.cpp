#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
        if(a[0]!=1) cout<<"NO\n";
        else {
            cout<<"YES\n";
        }
    }

    return 0;
}