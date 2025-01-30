#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, P;
    cin >> N >> P;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> left_volcano(N, -1);
    vector<int> left_max(N, 0);
    int last_v = -1;
    int current_max = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] == 0) {
            last_v = i;
            current_max = 0;
        } else {
            if (last_v != -1) {
                left_volcano[i] = last_v;
                left_max[i] = current_max;
                current_max = max(current_max, A[i]);
            } else {
                left_volcano[i] = -1;
                left_max[i] = 0;
            }
        }
    }

    vector<int> right_volcano(N, -1);
    vector<int> right_max(N, 0);
    last_v = -1;
    current_max = 0;
    for (int i = N - 1; i >= 0; --i) {
        if (A[i] == 0) {
            last_v = i;
            current_max = 0;
        } else {
            if (last_v != -1) {
                right_volcano[i] = last_v;
                right_max[i] = current_max;
                current_max = max(current_max, A[i]);
            } else {
                right_volcano[i] = -1;
                right_max[i] = 0;
            }
        }
    }

    vector<int> ans(N, 0);
    for (int i = 0; i < N; ++i) {
        if (A[i] == 0) {
            ans[i] = 0;
            continue;
        }

        int t_left = INT_MAX;
        if (left_volcano[i] != -1) {
            int t1 = (left_max[i] + P - 1) / P;
            int t2 = (A[i] + P - 1) / P;
            t_left = max(t1, t2);
        }

        int t_right = INT_MAX;
        if (right_volcano[i] != -1) {
            int t1 = (right_max[i] + P - 1) / P;
            int t2 = (A[i] + P - 1) / P;
            t_right = max(t1, t2);
        }

        ans[i] = min(t_left, t_right);
    }

    for (int i = 0; i < N; ++i) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}