#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        
        s += s; 
        
        int min_distance = INT_MIN;
        int last = -1;
        
        for (int i = s.size()-1; i >= 0 ; i--) {
            if(s[i]=='g'){
                last = i;
            }
            if(s[i]==c){
                min_distance = max(min_distance,last-i);
            }
        }
        cout << min_distance << endl;
    }
    
    return 0;
}
