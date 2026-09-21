/*

You are given an array A.
One random element is removed from A to form array B.
One random element is removed from B to form array C.
You have to find the missing element in B and the missing element in C.

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
        long long s1 = 0, s2 = 0, s3 = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            s1 += x;
        }
        for (int i = 0; i < n-1; ++i) {
            int x;
            cin >> x;
            s2 += x;
        }
        for (int i = 0; i < n-2; ++i) {
            int x;
            cin >> x;
            s3 += x;
        }
        cout << s1 - s2 << " " << s2 - s3 << "\n";
    }
    return 0;
}
