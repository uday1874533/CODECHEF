#include <bits/stdc++.h>
using namespace std;

vector<int> smallestCyclicRotation(vector<int>& B) {
    int n = B.size();
    vector<int> minRotation = B;
    for (int i = 1; i < n; ++i) {
        vector<int> rotated(B.begin() + i, B.end());
        rotated.insert(rotated.end(), B.begin(), B.begin() + i);
        if (rotated < minRotation) {
            minRotation = rotated;
        }
    }
    return minRotation;
}

vector<int> getLexMinArray(int N, int M, vector<int>& A, vector<int>& B) {
    vector<int> minB = smallestCyclicRotation(B);
    for (int i = 0; i <= N - M; ++i) {
        vector<int> tempA = A;
        for (int j = 0; j < M; ++j) {
            tempA[i + j] = minB[j];
        }
        if (tempA < A) {
            A = tempA;
        }
    }
    return A;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A(N), B(M);
        for (int i = 0; i < N; ++i) cin >> A[i];
        for (int i = 0; i < M; ++i) cin >> B[i];

        vector<int> result = getLexMinArray(N, M, A, B);
        for (int i = 0; i < N; ++i) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}