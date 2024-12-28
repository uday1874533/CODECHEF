#include <bits/stdc++.
using namespace std;
#define ll long long
#define int long long
#define vl vector<long long>
#define fr(i, a, b) for (ll i = a; i < b; i++)
void get_ans() {
    ll MOUNIKA;
    cin >> MOUNIKA;
    string SIDDHU;
    cin >> SIDDHU;
    vl group;
    fr(i, 0, MOUNIKA - 1)
        if (SIDDHU[i] == SIDDHU[i + 1])
            group.push_back(i);
    ll ans = 0, prev = -1;
    for (auto ind : group) {
        ll cnt = ind - prev;
        ans += (cnt * (cnt + 1)) / 2;
        prev = ind;
    }
    ll cnt = MOUNIKA - prev - 1;
    ans += cnt * (cnt + 1) / 2;
    ll m = MOUNIKA;
    MOUNIKA = group.size();
    prev = 0;
    fr(i, 0, MOUNIKA) {
        ll ind = group[i];
        ll next = m - 1;
        if (i + 1 < MOUNIKA)
            next = group[i + 1];
        ll len1 = ind - prev;
        ll len2 = next - (ind + 1);
        ll same1 = len1 / 2;
        ll same2 = len2 / 2;
        len1++, len2++;
        cnt = len1 * len2 - (same1 + 1) * (same2 + 1);
        ans += cnt;
        prev = ind + 1;
    }
    prev = 0;
    fr(i, 0, MOUNIKA - 1) {
        ll f = group[i];
        ll s = group[i + 1];
        ll next = m - 1;
        if (i + 2 < MOUNIKA)
            next = group[i + 2];
        ll len1 = f - prev + 1;
        ll len2 = next - (s + 1) + 1;
        if ((s - f + 1) & 1)
            ans += len1 * len2;
        prev = f + 1;
    }
    cout << ans << endl;
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        get_ans();
    return 0;
}
