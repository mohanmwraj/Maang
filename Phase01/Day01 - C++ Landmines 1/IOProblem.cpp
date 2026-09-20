/*
 * You are given an integer N and a decimal number M.
 * M can be represented as Y.Z where the dot is the decimal point
 * and N is referred to as X.
 * You have to find the value (Z+X).(Y+X)
 */

 #include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int main() { // Correct the return type of main here
    IOS int t; cin >> t;

    string s;
    // Add a dummy getline to clear the effect of cin.
    getline(cin, s); 
    while (t--) {
        // Take the full expression in string s
        // s now contains N M
        getline(cin, s);
        // We make 3 part strings x, y, z so that N=x, M=y.z, z is the fractional part.
        
        string x, y, z;
        bool doub = 0; // Flag to check if we have seen the space to know if we are now processing M.
        bool dot = 0;  // Flag to check if we are now processing the z part.
        for (int i = 0; i < s.size(); ++i) {
            if(s[i] == ' ') { // If ' ' seen in s, now put things in y and z
                doub = 1;
            }
            else if(s[i] == '.') { // If '.' seen in s, now put things in z.
                dot = 1;
            }
            else if(!doub) { // If not seen ' ', keep adding at the end of x.
                x += s[i];
            }
            else if(!dot) {	// If seen ' ' and not '.', keep adding at the end of y.
                y += s[i];
            }
            else { // If seen '.', keep adding at the end of z.
                z += s[i];
            }
        }
        int x1 = stoll(x), y1 = stoll(y), z1 = stoll(z); // Convert the strings into numbers
        z1 += x1; // Do what is asked in the questions.
        y1 += x1;
        cout << z1 << "." << y1 << "\n"; // Print two parts separately only, no need to create a float number.
    }
    return 0;
}