#include <bits/stdc++.h>

using namespace std;

int main() {
    // Input the cost of items at Chef's and Chefina's stall and the number of items sold
    int costChef, costChefina, itemsSold;
    cin >> costChef >> costChefina >> itemsSold;

    // Calculate the total sales for Chef and Chefina
    int salesChef = costChef * itemsSold;
    int salesChefina = costChefina * itemsSold;

    // Output the maximum sales
    cout << max(salesChef, salesChefina) << endl;

    return 0;
}
