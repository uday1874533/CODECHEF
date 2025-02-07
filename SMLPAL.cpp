#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T, BMW, SIDDHU;
    cin >> T;

    while (T--) {
        cin >> BMW >> SIDDHU;
        string palindrome = string(SIDDHU / 2, '2') + string(BMW / 2, '1');
        cout << palindrome + string(palindrome.rbegin(), palindrome.rend()) << endl;
    }

    return 0;
}
