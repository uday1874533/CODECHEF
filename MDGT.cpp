#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> H(N);
        for (int i = 0; i < N; ++i) {
            cin >> H[i];
        }
        int bhoomi_pos = N - 1;
        int bhoomi_height = H.back();
        int seconds = 0;
        bool can_see = false;
        
        can_see = true;
        for (int i = 0; i < bhoomi_pos; ++i) {
            if (H[i] >= bhoomi_height) {
                can_see = false;
                break;
            }
        }
        if (can_see) {
            cout << 0 << endl;
            continue;
        }
        
        while (bhoomi_pos > 0) {
            swap(H[bhoomi_pos], H[bhoomi_pos - 1]);
            bhoomi_pos--;
            seconds++;
            
            can_see = true;
            for (int i = 0; i < bhoomi_pos; ++i) {
                if (H[i] >= bhoomi_height) {
                    can_see = false;
                    break;
                }
            }
            if (can_see) {
                break;
            }
        }
        cout << seconds << endl;
    }
    return 0;
}