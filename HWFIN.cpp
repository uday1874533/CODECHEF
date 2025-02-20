#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    if (X >= 100) {
        cout << "YES";
    } else {
        int total = X + 10 * Y;
        cout << (total >= 100 ? "YES" : "NO");
    }
    return 0;
}