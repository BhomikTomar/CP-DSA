#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        char ch;
        string s;

        cin >> n >> ch >> s; 

        bool ok = true;
        long long in = -1;

        for(int i = 0; i < n; i++){
            if(s[i] == ch) in = i;
            if(s[i] != ch) ok = false;
        }

        if(ok){
            cout << 0 << endl;
        }
        else if(in == -1){
            cout << "2\n" << n - 1 << " " << n << endl;
        }
        else if(in == n - 1){
            cout << "1\n" << in + 1 << endl;
        }
        else if(in >= n / 2){
            cout << "1\n" << in + 1 << endl;
        }
        else{
            cout << "2\n" << n - 1 << " " << n << endl;
        }
    }
    return 0;
}