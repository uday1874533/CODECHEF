#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    vector<int> res(N);
    if (N == 0) {
        int Q;
        cin >> Q;
        while (Q--) {
            cout << 0 << '\n';
        }
        return;
    }
    res[0] = A[0];
    for (int i = 1; i < N; ++i) {
        if (i % 2 == 1) {
            res[i] = res[i-1] & A[i];
        } else { // OR operation
            res[i] = res[i-1] | A[i];
        }
    }
    
    int Q;
    cin >> Q;
    while (Q--) {
        int p, X;
        cin >> p >> X;
        p--; 
        if (A[p] == X) {
            cout << res.back() << '\n';
            continue;
        }
        A[p] = X;
        
        int start = p;
        int current;
        if (start == 0) {
            current = A[0];
            res[0] = current;
            start = 1;
        } else {
            current = res[start - 1];
            if (start % 2 == 1) {
                current = current & A[start];
            } else {
                current = current | A[start];
            }
            if (current == res[start]) {
                cout << res.back() << '\n';
                continue;
            }
            res[start] = current;
            start++;
        }
        
        for (int i = start; i < N; ++i) {
            if (i % 2 == 1) {
                current = current & A[i];
            } else {
                current = current | A[i];
            }
            if (current == res[i]) {
                break;
            }
            res[i] = current;
        }
        cout << res.back() << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}