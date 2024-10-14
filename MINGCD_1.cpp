/**
 * Author: omteja04
 * Created on: 09-10-2024 20:22:03
 * Description: GCD_to_1_Easy
 **/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pl = pair<ll, ll>;
using pi = pair<int, int>;
using pd = pair<ld, ld>;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vvb = vector<vector<bool>>;
using vvl = vector<vector<ll>>;
using vvi = vector<vector<int>>;
using vvpl = vector<vector<pl>>;

#define cin1d(n, array)        \
    for (ll i = 0; i < n; i++) \
    cin >> array[i]
#define cin2d(n, m, array)         \
    for (ll i = 0; i < n; i++)     \
        for (ll j = 0; j < m; j++) \
    cin >> array[i][j]
#define cout1d(n, array)       \
    for (ll i = 0; i < n; i++) \
    cout << array[i] << ' '
#define cout2d(n, m, array)        \
    for (ll i = 0; i < n; i++)     \
        for (ll j = 0; j < m; j++) \
    cout << array[i][j]
#define forN(i, n) for (ll i = 0; i < (n); i++)
#define forAB(i, a, b) for (ll i = (a); i < (b); i++)
#define rFN(i, n) for (ll i = (n); i >= 0; i--)
#define rFAB(i, b, a) for (ll i = (b); i >= (a); i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((ll)(x).size())
#define middle low + (high - low) / 2
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define fixed(n) fixed << setprecision(n)
#define digits(n) ((int)log10(n) + 1)
#define fill(array, value) memset(array, value, sizeof(array));
#define YES cout << "YES"
#define NO cout << "NO"

const int MOD = 1000000007;
const double PI = acos(-1);

#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

void levi() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j)
                arr[i][j] = 3;
            else
                arr[i][j] = 2;
        }
    }
    if (n > m) {
        for (int i = m; i < n; i++) {
            arr[i][0] = 3;
        }
    } else {
        for (int i = n; i < m; i++) {
            arr[0][i] = 3;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    fast_cin();

    tc {
        levi();
        cout << '\n';
    }
    return 0;
}
