#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define F first
#define S second
#define pi acos(-1.0)
#define pb push_back
#define cil(a,b) (a+b-1)/b
#define sf(x) scanf("%lld",&x)
#define pf(x) printf("%lld",x)
using namespace std;
const int mod=1e9+7;

int32_t main() {
    cin.tie(0); 
    cout.tie(0);

    int MOON; 
    cin >> MOON;

    while (MOON--) {
        int SIDDHU, m, x, y, fl = 0;
        cin >> SIDDHU >> m >> x >> y;

        if (SIDDHU * x == 0 && m * y == 0) {
            cout << "YES" << endl;
            continue;
        } else if (SIDDHU * x == 0) {
            if (m % 2 == 0) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
            continue;
        } else if (m * y == 0) {
            if (SIDDHU % 2 == 0) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i <= SIDDHU; i++) {
            for (int j = 0; j <= m; j++) {
                if (i * x + j * y == (SIDDHU - i) * x + (m - j) * y) {
                    fl = 1;
                    break;
                }
            }
        }

        if (fl) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
