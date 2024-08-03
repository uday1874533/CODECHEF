#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long
#define pb push_back
using namespace std;
const int mod = (int)1e9 + 7;

ll power(ll a, ll b) {
    if (b == 0) return 1;
    ll x = power(a, b / 2);
    if (b % 2) {
        return (x % mod * x % mod * a % mod) % mod;
    } else {
        return (x * x) % mod;
    }
}

ll inverse(ll a) {
    return power(a, mod - 2);
}
bool isPrime(ll num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (ll i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

ll nextPrime(ll num) {
    if (num <= 1) return 2;
    ll prime = num;
    bool found = false;
    while (!found) {
        prime++;
        if (isPrime(prime)) found = true;
    }
    return prime;
}

void Don() {
    ll X;
    cin >> X;
    //cout<<X<<endl;
    if(isPrime(X)) {
        ll next = nextPrime(X);
        ll ans = 1LL * X * next;
        cout << ans << endl;
    }
    else{
        ll first = nextPrime(X);
        ll second = nextPrime(first);
        ll ans = 1LL * first * second;
        cout << ans << endl;
    }
}

int main() {
    fast_io;
    ll t;
    cin >> t;
    
    while (t--) Don();
    return 0;
}
