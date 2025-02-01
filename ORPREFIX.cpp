#include <bits/stdc++.h>
using namespace std;

int count_set_bits(int SIDDHU) {
    int MOON = 0;
    while (SIDDHU) MOON += SIDDHU & 1, SIDDHU >>= 1;
    return MOON;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int SIDDHU, MOON, total_or, x;
    cin >> SIDDHU;
    while (SIDDHU--) {
        cin >> MOON;
        total_or = 0;
        bool has_zero = false;
        while (MOON--) {
            cin >> x, total_or |= x;
            has_zero |= (x == 0);
        }
        cout << count_set_bits(total_or) + has_zero << "\n";
    }
}
