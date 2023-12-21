#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int a, b;
        cin >> a >> b;
        cout << max({1, a / ++b + (a % b != 0), a - 2 * (b - 1)}) << endl;
    }
    
    return 0;
}


