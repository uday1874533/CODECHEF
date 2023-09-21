#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int A, B;
        std::cin >> A >> B;

        int X = 0;
        for (int i = 29; i >= 0; i--) {
            int bitA = (A >> i) & 1;
            int bitB = (B >> i) & 1;
            if (bitA != bitB) {
                X |= (1 << i);
            }
        }

        std::cout << X << std::endl;
    }

    return 0;
}
