#include <bits/stdc++.h>

using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;

    if (K == N) {
        cout << "-1\n";
        return;
    }

    vector<int> P(N + 1);

    for (int i = 1; i <= N; i++) {
        P[i] = (i + K <= N) ? i + K : i + K - N;
    }

    for (int i = 1; i <= N; i++) {
        cout << P[i] << " ";
    }
    cout << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
