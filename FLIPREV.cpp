#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string A, B;
        cin >> A >> B;

        vector<tuple<int, int, int>> operations;

        for (int i = 0; i < N; ++i) {
            if (A[i] != B[i]) {
                operations.push_back({1, i + 1, i + 1});
                A[i] = (A[i] == '0') ? '1' : '0';
            }
        }

        if (operations.size() > (N + 1) / 2) {
            operations.clear();
            for (int i = 0; i < N / 2; ++i) {
                if (A[i] != B[N - 1 - i]) {
                    // Reverse operation to align mismatches
                    operations.push_back({2, i + 1, N - i});
                    reverse(A.begin() + i, A.begin() + (N - i));
                }
            }
            for (int i = 0; i < N; ++i) {
                if (A[i] != B[i]) {
                    operations.push_back({1, i + 1, i + 1});
                    A[i] = (A[i] == '0') ? '1' : '0';
                }
            }
        }

        cout << operations.size() << endl;
        for (auto& op : operations) {
            cout << get<0>(op) << " " << get<1>(op) << " " << get<2>(op) << endl;
        }
    }
    return 0;
}