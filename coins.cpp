#include<iostream>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;

        if(n % 2 == 0) {
            cout << "YES\n";
        }
        else if(n % 2 == 1) {
            int rem = n - k;
            if(k % 2 == 0) cout << "NO\n";
            else {
                if(rem % 2 == 0) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
    return 0;
}