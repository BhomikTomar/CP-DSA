#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> singleChar(26, false);
    for (int i = 0; i < n; i++) {
        singleChar[s[i] - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!singleChar[i]) {
            cout << (char)('a' + i) << endl;
            return;
        }
    }

    set<string> twoCharSubstrings;
    for (int i = 0; i < n - 1; i++) {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        twoCharSubstrings.insert(temp);
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            string temp = "";
            temp += (char)('a' + i);
            temp += (char)('a' + j);

            if (twoCharSubstrings.find(temp) == twoCharSubstrings.end()) {
                cout << temp << endl;
                return;
            }
        }
    }

    set<string> threeCharSubstrings;
    for (int i = 0; i < n - 2; i++) {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        temp += s[i + 2];
        threeCharSubstrings.insert(temp);
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            for (int k = 0; k < 26; k++) {
                string temp = "";
                temp += (char)('a' + i);
                temp += (char)('a' + j);
                temp += (char)('a' + k);

                if (threeCharSubstrings.find(temp) == threeCharSubstrings.end()) {
                    cout << temp << endl;
                    return;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
