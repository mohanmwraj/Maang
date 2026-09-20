/*
You are given an array A of N integers. You have to choose a contiguous
arithmetic subarray with equal difference between consecutive integers that has
the maximum length. Find the maximum possible length.
*/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int cur = 2, diff = a[1] - a[0];
        int ans = 2;
        for (int i = 2; i < n; ++i) {
            if(a[i] - a[i-1] == diff) {
                cur++;
            } else {
                cur = 2;
                diff = a[i] - a[i-1];
            }
            ans = max(ans, cur);
        }
        cout << ans << "\n";
    }
    return 0;
}
