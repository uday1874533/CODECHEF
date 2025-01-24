#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        long long maxi = LLONG_MIN;
        for (int i = 0; i < n; i++) {
            long long num = arr[i];
            long long multi = (x * (n - i - 1));
            long long number = num + multi;
            maxi = max(maxi, number);
        }
        cout << maxi << "\n";
    }
    return 0;
}
