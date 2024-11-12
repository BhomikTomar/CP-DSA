#include <bits/stdc++.h>
using namespace std;
bool is_Prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int next_prime(int n){
    for(int i=n; ;i++){
        if(is_Prime(i)){
            return i;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        int p = next_prime(d+1);
        int q = next_prime(p+d);

        cout<<min(1LL*p*p*p,1LL*p*q)<<endl;
    }
    return 0;
}