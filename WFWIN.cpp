#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int MOUNI, SIDDHU;
        cin >> MOUNI >> SIDDHU;
        int ans = 0;
        while(MOUNI < 299 && MOUNI + SIDDHU + 20 * ans < 1000) {
            ++MOUNI;
            ++ans;
        }
        if(MOUNI + SIDDHU + 20 * ans <= 1000) cout << ans << endl;
        else cout << ans - 1 << endl;
    }
    return 0;
}
