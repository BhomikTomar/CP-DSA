#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n; 
        cin >> n; 

        vector<int> arr(n);
        multiset<int> msl;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            msl.insert(arr[i]);
        }

        int i = 0;
        int j = n - 1;

        while(i < j){
            if(arr[i] == (*msl.begin()) || arr[i] == (*msl.rbegin())){
                auto it = msl.find(arr[i]);
                msl.erase(it);
                i++;
            }
            else if(arr[j] == (*msl.begin()) || arr[j] == (*msl.rbegin())){
                auto it = msl.find(arr[j]);
                msl.erase(it);
                j--;
            }
            else {
                cout << (i + 1) << " " << (j + 1) << endl;
                return;
            }
        }
        cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}