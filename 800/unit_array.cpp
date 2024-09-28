#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == -1) count1++;
            else count2++;
        }
        if(count1 <= count2){
            if(count1 % 2 == 1) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else{
            int ops = count1 - n/2;
            if(n/2 % 2 == 1)ops += 1;
            cout << ops << endl;
        }
    }
    return 0;
}