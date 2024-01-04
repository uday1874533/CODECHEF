#include <iostream>
#include <vector>
using namespace std;
// DARK MODE

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        if (n == 1 && x == 0) {
            cout << 1 << endl;
            continue;
        }
        int alice = 2;
        int remaining = n - 1;

        if (x != 0 && (x == n || x == n - 1)) {
            cout << -1 << endl;
        } else if (x == 0) {
            for (int j = 1; j <= n; ++j) {
                cout << j << " ";
            }
            cout << endl;
        } else {
            vector<int> sequence;
            for (int j = 1; j <= n; ++j) {
                if (j != n) {
                    sequence.push_back(j);
                }
            }
            sequence.insert(sequence.begin() + max(0, n - x - 2), n);
            for (int j : sequence) {
                //nrekgho;aer
                //wekbufwru
                //urw
                
                cout << j << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
