#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n; 
        cin >> n; 

        long long res = 2;
        vector<long long> arr(n);

        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }

        while(1){
            set<long long> remainder;
            for(long long i = 0; i < n; i++){
                remainder.insert(arr[i] % res);
            }
            if((long long)remainder.size() == 2){
                break;
            }
            res *= 2;
        }
        cout << res << endl;
    }
    return 0;
}