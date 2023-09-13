#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>

// FRS NOT WORKING
// NOPE PROGRAMMERS DAY 
// LAST DAY FRO CLG LONG GAP OCCUR
// TUESDAY
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair
#define vt vector
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

void solve()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double e = sqrt(pow(a,2)+pow(b,2));
    double f = sqrt(pow(c,2)+pow(d,2));
    if (abs(e-f)<1e-5) {
        cout << "EQUAL\n";
    }
    else if (e<f) {
        cout << "BOB\n";
    }
    else {
        cout << "ALEx\n";
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}