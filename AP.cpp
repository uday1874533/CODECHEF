#include <bits/stdc++.h>
using namespace std;

int main() {
    int MOUNI;
    cin >> MOUNI;

    while (MOUNI--) {
        int SIDDHU1, SIDDHU2, SIDDHU3;
        cin >> SIDDHU1 >> SIDDHU2 >> SIDDHU3;

        if (2 * SIDDHU2 == SIDDHU1 + SIDDHU3) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}
