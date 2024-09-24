#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int count = 0;

        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 2) count++;
        }

        if(count == 0){
            cout << 1 << endl;
            continue;
        }

        int discovered = 0;
        bool found = false;

        for(int i = 0; i < n; i++){
            if(arr[i] == 2) discovered++;
            if(discovered == count - discovered){
                cout << i+1 << endl;
                found = true;
                break;
            }
        }

        if(!found) cout << -1 << endl;
    }
    return 0;
}
