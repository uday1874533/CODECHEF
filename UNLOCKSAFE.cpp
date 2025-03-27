#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < N; ++i) cin >> B[i];
        
        int total_min = 0;
        bool has_same = false;
        for (int i = 0; i < N; ++i) {
            if (A[i] == B[i]) {
                has_same = true;
                continue;
            }
            int diff = abs(B[i] - A[i]);
            int m = min(diff, 9 - diff);
            total_min += m;
        }
        
        if (K < total_min) {
            cout << "No\n";
        } else {
            int remaining = K - total_min;
            if (remaining == 0) {
                cout << "Yes\n";
            } else {
                if (has_same || remaining >= 2) {
                    cout << "Yes\n";
                } else {
                    cout << "No\n";
                }
            }
        }
    }
    return 0;
}