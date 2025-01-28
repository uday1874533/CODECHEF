#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int MUNNI;
    cin >> MUNNI;
    while(MUNNI--) {
        int SIDDHU;
        cin >> SIDDHU;
        vector<int> uday(SIDDHU);
        for(int i = 0; i < SIDDHU; i++) {
            cin >> uday[i];
        }
        int cnt = 0, cntt = 0;
        for(int i = 0; i < SIDDHU; i++) {
            if(uday[i] % 2 == 0) cnt++;
            else cntt++;
        }
        cout << max(cnt, cntt) << endl;
    }
}
