#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long N, M;
    cin >> N >> M;
    if (N == 0) {
        vector<long long> elements = {0};
        long long current = 1;
        while (current <= M) {
            elements.push_back(current);
            if (current > M / 2) break; 
            current <<= 1;
        }
        cout << elements.size() << "\n";
        for (size_t i = 0; i < elements.size(); ++i) {
            cout << elements[i];
            if (i != elements.size() - 1) cout << " ";
        }
        cout << "\n";
    } else {
        vector<int> candidate_bits;
        for (int b = 0; b <= 60; ++b) {
            if (!(N & (1LL << b))) {
                long long candidate = N | (1LL << b);
                if (candidate <= M) {
                    candidate_bits.push_back(b);
                }
            }
        }
        if (candidate_bits.size() >= 1) {
            vector<long long> ans;
            ans.push_back(N);
            for (int b : candidate_bits) {
                ans.push_back(N | (1LL << b));
            }
            cout << ans.size() << "\n";
            for (size_t i = 0; i < ans.size(); ++i) {
                cout << ans[i];
                if (i != ans.size() - 1) cout << " ";
            }
            cout << "\n";
        } else {
            cout << "-1\n";
        }
    }
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