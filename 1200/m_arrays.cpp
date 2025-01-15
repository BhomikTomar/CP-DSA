#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, m; 
        cin >> n >> m;

        map<long long, long long> mp;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            long long y = x % m;
            mp[y]++;
        }

        long long total = 0;

        for(auto i : mp){
            if(i.first == 0 && i.second > 0){
                total++;
            }

            else if(mp.count(m - i.first) == 0) total += i.second;
            
            else if(m - i.first == i.first){
                total++;
            }

            else if(m - i.first > i.first){
                long long a = i.second;
                long long b = mp[m - i.first];

                if(abs(a - b) <= 1) total++;

                else if(a > b){
                    a -= b + 1;
                    total++;
                    total += a;
                }

                else{
                    b -= a + 1;
                    total++;
                    total += b;
                }
            }
        }
        
        cout << total << endl;
    }
    return 0;
}