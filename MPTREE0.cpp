#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2005;
vector<int> primes;

void sieve() {
    vector<bool> isPrime(MAXN, true);
    for (int p = 2; p * p < MAXN; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i < MAXN; i += p)
                isPrime[i] = false;
        }
    }
    for (int p = 2; p < MAXN; p++) {
        if (isPrime[p])
            primes.push_back(p);
    }
}

int mexP(const set<int>& s) {
    for (int p : primes) {
        bool dividesAll = true;
        for (int x : s) {
            if (x % p != 0) {
                dividesAll = false;
                break;
            }
        }
        if (!dividesAll)
            return p;
    }
    return primes.back();
}

void dfs(int u, int parent, vector<int>& path, vector<int>& A, vector<vector<int>>& adj, vector<int>& B) {
    path.push_back(A[u]);
    set<int> s(path.begin(), path.end());
    B[u] += mexP(s);
    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u, path, A, adj, B);
        }
    }
    path.pop_back();
}

int main() {
    sieve();
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N + 1);
        for (int i = 1; i <= N; i++)
            cin >> A[i];
        vector<vector<int>> adj(N + 1);
        for (int i = 1; i < N; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> B(N + 1, 0);
        for (int u = 1; u <= N; u++) {
            vector<int> path;
            dfs(u, -1, path, A, adj, B);
        }
        for (int u = 1; u <= N; u++)
            cout << B[u] << " ";
        cout << endl;
    }
    return 0;
}