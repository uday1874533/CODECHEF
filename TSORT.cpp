#include<bits/stdc++.h>
using namespace std;

int N, A[1000001];

int main()
{
    cin >> N;
    for(int i = 1; i <= N; i++)
        cin >> A[i];
    sort(A + 1, A + N + 1);
    for(int i = 1; i <= N; i++)
        cout << A[i] << endl;
}