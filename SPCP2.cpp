#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int X, N;
        cin >> X >> N;
        
        int planes_needed = ceil(static_cast<double>(N) / 100);
        int planes_to_buy = max(0, planes_needed - X);

        cout << planes_to_buy << endl;
    }
    return 0;
}
