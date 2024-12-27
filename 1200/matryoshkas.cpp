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
        
        vector<int> arr(n);
        map<int, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
        int max_freq = 0;
        int last = 0;
        int count1 = 0;
        for (auto &pair : freq) {
            if(pair.first == last + 1){
                if(count1 >= pair.second){
                    last = pair.first;
                    count1 = pair.second;
                }
                else{
                    max_freq += pair.second - count1;
                    last = pair.first;
                    count1 = pair.second;
                }
            }
            else{
                max_freq += pair.second;
                last = pair.first;
                count1 = pair.second;
            }
        }
        
        cout << max_freq << endl;
    }
    
    return 0;
}
