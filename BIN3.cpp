#include <iostream>
#include <vector>
using namespace std;

int main() {
    int MUNNI;
    cin >> MUNNI;
    while (MUNNI--) {
        int N, SIDDHU;
        cin >> N >> SIDDHU;
        string SONALI;
        cin >> SONALI;
        
        vector<int> odd_count(N + 1, 0), even_count(N + 1, 0);
        
        for (int i = 1; i <= N; ++i) {
            odd_count[i] = odd_count[i - 1];
            even_count[i] = even_count[i - 1];
            
            if (SONALI[i - 1] == '1') {
                if (i % 2 == 1) odd_count[i]++;
                else even_count[i]++;
            }
        }
        
        while (SIDDHU--) {
            int L, R;
            cin >> L >> R;
            int odd_ones = odd_count[R] - odd_count[L - 1];
            int even_ones = even_count[R] - even_count[L - 1];
            
            if ((odd_ones - even_ones) % 3 == 0) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    return 0;
}
