#include <bits/stdc++.h>
using namespace std;

/*

You are given an array of n integers. Exactly one integer has an odd frequency in the array.

Your Task: Find that integer.

Follow up: Use O(1) Space complexity
*/


// Take xor of all elements of the array. All the numbers with even frequency would get cancelled out.

void solve() {
    int n; cin >> n;

    int ans = 0;
    int temp;
    for(int i = 0; i < n; ++i){
        cin >> temp; // Read the next element
        ans ^= temp; // XOR accumulates the element to find the one with odd frequency
    }

    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1; cin >> t; while(t--) 
    solve();

    return 0;
}