#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n; 

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(a[n - 2] > a[n - 1]){
            cout << -1 << endl;
        }

        else if(a[n - 1] >= 0){
            cout << n - 2 << endl;
            for(int i = 0; i < n - 2; i++){
                cout << i + 1 << " " << n - 1 << " " << n << endl;
            }
        }
        else{
            vector<int> b = a;
            sort(b.begin(), b.end());

            if(b == a) cout << 0 << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}