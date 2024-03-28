#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i]--; // decrementing the input by 1                
        }

        int start = 0;
        int ans = 0;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == i) {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
                ans++;
            }
        }
        if (arr[n - 1] == n - 1)
            ans++;

        cout << ans << endl;
        t--;
    }

    return 0;
}
