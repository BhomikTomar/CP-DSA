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

        vector<long long> arr(n);

        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        }

        long long b, c = 0, state = 0;
        if( n == 1){
            cout << 1 << endl;
            continue;
        }

        for(long long i = 1; i < n; i++){
            if((arr[i - 1] > arr[i]) && state != 1){
                c++;
                state = 1;
            }
            else if((arr[i - 1] < arr[i]) && state != -1){
                c++;
                state = -1;
            }
        }
        cout << c + 1 << endl;
    }
    return 0;
}