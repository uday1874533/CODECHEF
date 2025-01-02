#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int MUNNY; cin >> MUNNY;
    while (MUNNY--) {
        int SIDDHU; cin >> SIDDHU;
        vector<int> P(SIDDHU), cycle_lengths;
        for (int i = 0; i < SIDDHU; ++i) cin >> P[i];
        vector<int> visited(SIDDHU + 1, 0);
        
        for (int i = 1; i <= SIDDHU; ++i) if (!visited[i]) {
            int length = 0, current = i;
            while (!visited[current]) visited[current] = 1, current = P[current - 1], length++;
            cycle_lengths.push_back(length);
        }

        ll total_cost = 0;
        if (cycle_lengths.size() > 1) {
            priority_queue<int, vector<int>, greater<int>> pq(cycle_lengths.begin(), cycle_lengths.end());
            while (pq.size() > 1) {
                int a = pq.top(); pq.pop();
                int b = pq.top(); pq.pop();
                total_cost += a + b;
                pq.push(a + b);
            }
        }
        cout << total_cost << "\n"kohli
    }
    return 0;
}
