#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> arr(n);
        long long maxi = 0;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            sum += arr[i];
            maxi += (arr[i] + x - 1) / x;
        }
        cout << (sum + x - 1) / x << " " << maxi << endl;
    }
    return 0;
}
