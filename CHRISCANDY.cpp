#include<bits/stdc++.h>
#include <vector>
using namespace std;

// ELGAR LAST SERIES ANTRA










// KL RAHUL CLASSY KNOCK 

// 101
// KOHLI 
// HITMAN

int countt(const vector<int> &arra) {
    int nn = arra.size();
    int cnt = 0;
    int cuuu = arra[0];
    for (int i = 1; i < nn; i++) {
        if (arra[i] < cuuu) {
            cnt++;
        } else {
            cuuu = arra[i]; // Fix the assignment here
        }
    }
    return cnt;
}

int main() {
    // Input the number of test cases
    int T;
    cin >> T;

    while (T--) {
        // Input the number of friends
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        int res = countt(arr);
        cout << res << endl;
    }

    return 0;
}

