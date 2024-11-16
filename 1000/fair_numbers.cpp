#include <bits/stdc++.h>
using namespace std;
bool is_fair(unsigned long long n){
    string x = to_string(n);
    for(int i = 0; i < x.length(); i++){
        if(x[i] != '0' && n % (x[i]-'0') != 0) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        unsigned long long n; 
        cin>>n;

        while(!is_fair(n)){
            n++;
        }

        cout<<n<<endl;
    }
    return 0;
}