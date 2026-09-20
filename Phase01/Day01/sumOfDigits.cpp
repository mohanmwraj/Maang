/*
You are given an integer N with no more than 10^5 digits.
You have to find the sum of its digits.
*/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ans = 0;
        for (char digit : s) {
            ans += (digit - '0');
        }
        cout << ans << "\n";
    }
    return 0;
}
