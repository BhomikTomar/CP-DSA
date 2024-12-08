#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n; cin >> n; 

        vector<long long> arr(n);

        long long count = 0;
        long long mini = LONG_LONG_MAX;
        long long sum = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];

            if(arr[i] < 0){
                count++;
            }

            mini = min(mini, abs(arr[i]));
            sum += abs(arr[i]);
        }
        if(count % 2){
            cout << sum - mini - mini << endl;
        }
        else{
            cout << sum << endl;
        }
    }
    return 0;
}