#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        unordered_map<int, int> mp;
        bool yes = true;

        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;

            if(mp.size() > 2) {
                yes = false;
                break;
            }
        }

        if(mp.size() == 2) {
            int count1 = mp.begin()->second;
            int count2 = next(mp.begin())->second;

            if(count1 != n/2 && count2 != n/2) yes = false;
        }

        if(yes) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}
