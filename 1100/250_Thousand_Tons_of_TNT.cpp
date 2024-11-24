#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, b, resMax = 0; 
        cin >> n; 

        vector<long long> pre;

        long long sum = 0;
        pre.push_back(0);

        for(long long i = 0; i < n; i++){
            cin >> b;
            sum += b;
            pre.push_back(sum);
        }

        for(long long i = 1; i <= n; i++){
            vector<long long> v;
            if(n % i == 0){
                for(long long j = i; j <= n; j += i){
                    sum = pre[j] - pre[j - (i)];
                    v.push_back(sum);
                }
                sort(v.begin(), v.end());
                resMax = max(resMax, v[(long long)v.size()-1] - v[0]);
            }
        }
        cout<<resMax<<endl;
    }
    return 0;
}