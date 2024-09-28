#include<iostream>
#include<set>
using namespace std;
set<int> generateCandidates() {
    set<int> candidates;
    for(int d = 1; d <= 9; d++) { 
        int num = d;
        while(num <= 1e7) { 
            candidates.insert(num);
            num *= 10;
        }
    }
    return candidates;
}

int main(){
    set<int> candidates = generateCandidates();

    int t;
    cin >> t;  
    while(t--){
        int n;
        cin >> n; 
        int ans = 0;

        for(auto it : candidates){
            if(it <= n){
                ans++;
            }
        }

        cout << ans << endl; 
    }
    return 0;
}
