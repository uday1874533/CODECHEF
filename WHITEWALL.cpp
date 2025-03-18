#include <iostream>
#include <string>
using namespace std;

int white_wall(int KOHLI, string SIDDHU) {
    string T = "RGB";
    int min_ops = KOHLI;
    for (int start = 0; start < 3; ++start) {
        int changes = 0;
        for (int i = 0; i < KOHLI; ++i)
            changes += (SIDDHU[i] != T[(i + start) % 3]);
        min_ops = min(min_ops, changes);
    }
    return min_ops;
}

int main() {
    int T; cin >> T;
    while (T--) {
        int KOHLI; string SIDDHU;
        cin >> KOHLI >> SIDDHU;
        cout << white_wall(KOHLI, SIDDHU) << endl;
    }
    return 0;
}
