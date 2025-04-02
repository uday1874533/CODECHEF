#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        
        int ones = count(S.begin(), S.end(), '1');
        for (int i = 0; i < N - 1 && K > 0; ++i) {
            if (S[i] == '0' && S[i+1] == '1') {
                int can_convert = min(K, i + 1 - (i > 0 && S[i-1] == '1' ? 1 : 0));
                if (can_convert > 0) {
                    S[i] = '1';
                    ones++;
                    K--;
                }
            }
        }
        cout << ones << '\n';
    }
    
    return 0;
}