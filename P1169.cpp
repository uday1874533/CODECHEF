#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 1; // Number of test cases ko define kar rahe hain (yahan ek hi test case consider kiya gaya hai).
    // cin >> t; // Agar multiple test cases input se lene ho, toh is line ko uncomment karo.

    while(t--){ // Har test case ke liye loop chalega.
        int a; // Variable 'a' ko define kiya, jo Chef ki age store karega.
        cin >> a; // User se Chef ki age input le rahe hain.

        if(a >= 10) // Check kar rahe hain agar Chef ki age 10 ya usse zyada hai.
            cout << "YES" << endl; // Agar age 10 ya usse zyada hai, toh "YES" print karenge.
        else
            cout << "NO" << endl; // Agar age 10 se kam hai, toh "NO" print karenge.
    }

    return 0; // Program successfully terminate kar diya.
}
