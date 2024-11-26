#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long left = 1, right = 1e10;

        while (left < right - 1) {
            long long total_water = 0;
            long long mid = left + (right - left) / 2;

            for(long long i = 0; i < n; i++){
                if(a[i] < mid){
                    total_water += mid - a[i];
                }
            }
            if(total_water > x){
                right = mid;
            }
            else{
                left = mid;
            }    
        } 
        cout << left << endl;
    }

    return 0;
}
