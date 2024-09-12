#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        bool found_k = false, found_segment = false;
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] == k) {
                found_k = true;
            }
        }

        if(!found_k) {
            cout << "NO\n";
            continue;
        }

        if(n == 1 && arr[0] == k) {
            cout << "YES\n";
            continue;
        }

        for(int i = 0; i < n - 1; i++) {
            if(arr[i] == k && arr[i+1] == k) {
                found_segment = true;
                break;
            }
        }
        
        if(found_segment || found_k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
