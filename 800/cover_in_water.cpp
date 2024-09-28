#include <iostream>
#include <string>
using namespace std;

int minWaterPlacements(string s, int n) {
    int i = 0, count = 0;
    
    while (i < n) {
        if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
            count = 2;
            break;  
        }
        else if (s[i] == '.'){
            count++;
            i++;
        }
        else {
            i++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n; 
        string s;
        cin >> s; 
        cout << minWaterPlacements(s, n) << endl;
    }
    
    return 0;
}