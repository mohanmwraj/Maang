/*
Using the characters: . (dot), * (asterisk), / (slash), and \ (backslash), print a grid-like pattern as shown in the sample test cases.

The diagonal of the first square of the grid is directed towards the down-right corner; use the \ (backslash) character to print it.
The next diagonal will be directed towards the upper-right corner; use the / (slash) character to print it.

Approach (mathematical pattern):
Each small square has side length p + 1. The whole grid is made of repeated blocks, so the lines separating the blocks appear
at positions where i % (p + 1) == 0 or j % (p + 1) == 0. Those are the '*' borders.

Inside a block, the diagonals follow arithmetic progressions:
- '/' diagonals satisfy i + j = constant
- '\' diagonals satisfy i - j = constant

Since the pattern repeats every 2 * (p + 1) cells, we can detect them using modulo:
- '/' if (i + j) % (2 * (p + 1)) == 0
- '\' if (i - j) % (2 * (p + 1)) == 0

This works because the diagonals are spaced by exactly 2 * (p + 1) positions in the repeating pattern.
*/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n, m, p;
        cin >> n >> m >> p;

        // Total grid size is (p + 1) * n + 1 and (p + 1) * m + 1
        // The extra +1 is used to print the final border line as well.
        for (int i = 0; i < (p + 1) * n + 1; ++i) {
            for (int j = 0; j < (p + 1) * m + 1; ++j) {
                // All vertical and horizontal grid lines are marked with '*'
                if (i % (p + 1) == 0 || j % (p + 1) == 0) {
                    cout << "*";
                }
                // '/' diagonals: i + j remains constant on each diagonal
                else if ((i + j) % ((p + 1) * 2) == 0) {
                    cout << "/";
                }
                // '\' diagonals: i - j remains constant on each diagonal
                else if ((i - j) % ((p + 1) * 2) == 0) {
                    cout << "\\";
                }
                else {
                    cout << ".";
                }
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}