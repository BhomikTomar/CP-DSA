#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        set<int> elements;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            elements.insert(a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            elements.insert(b[i]);
        }

        map<int,int> mp1,mp2;
        int count = 1;
        mp1[a[0]]=1;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                count++;                
            }
            else{
                count = 1;
            }
            mp1[a[i]] = max(mp1[a[i]], count);
        }

        mp2[b[0]]=1;
        count = 1;

        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                count++;
            }
            else{
                count = 1;
            }
            mp2[b[i]] = max(mp2[b[i]], count);
        }

        int maxLength = 1;
        for (auto e : elements) {
            maxLength = max(maxLength, mp1[e] + mp2[e]);
        }
        
        cout << maxLength << endl;
    }

    return 0;
}
