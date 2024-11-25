#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long int n, q;
        cin >> n >> q;

        vector<long long int> a(n);
        vector<long long int> x(q);

        for(long long int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        for(long long int i = 0; i < q; i++){
            cin >> x[i];
        }

        set<long long int> hs;

        for(long long int i = 0; i < q; i++){
            if(hs.count(x[i])) {
                continue;
            }

            hs.insert(x[i]);

            for(long long int j = 0; j < n; j++){
                if(a[j] % (1 << x[i]) == 0){
                    a[j] += (1 << (x[i] - 1));
                }
            }
        }

        for(auto i: a){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}