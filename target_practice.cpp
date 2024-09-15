#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> grid(10, vector<char>(10));
        int points = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] != '.') {
                    int min_distance = min(min(i, 9 - i), min(j, 9 - j));
                    switch (min_distance) {
                        case 0: points += 1; break;
                        case 1: points += 2; break;
                        case 2: points += 3; break;
                        case 3: points += 4; break;
                        case 4: points += 5; break;
                    }
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}
