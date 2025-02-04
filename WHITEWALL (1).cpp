#include <iostream>
#include <string>
#include <vector>
using namespace std;

int white_wall(int N, string S) {
    vector<string> patterns = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
    int min_ops = N;
    for (string pat : patterns) {
        int changes = 0;
        for (int i = 0; i < N; ++i) {
            if (S[i] != pat[i % 3]) {
                changes++;
            }
        }
        if (changes < min_ops) {
            min_ops = changes;
        }
    }
    return min_ops;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        cout << white_wall(N, S) << "\n";
    }
    return 0;
}