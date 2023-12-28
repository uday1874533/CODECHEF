#include<bits/stdc++.h>
// KL RAHUL
// NO WICKETS
#include <vector>
using namespace std;

int main() {
    int numTestCases;
    cin >> numTestCases;

    for (int caseIndex = 0; caseIndex < numTestCases; ++caseIndex) {
        int numFriends;
        cin >> numFriends;
        string inputString;
        cin >> inputString;

        // Create a string with N 'P's
        vector<char> result(numFriends, 'P');

        // Initial win count
        int remainingWins = numFriends / 2 + 1;

        // Iterate over the original string
        for (int i = 0; i < numFriends; ++i) {
            if (inputString[i] == 'R') {
                // Decrease wins for 'R'
                remainingWins -= 1;
            }
        }

        // Iterate in reverse
        for (int i = numFriends - 1; i >= 0; --i) {
            if (remainingWins > 0 && (inputString[i] == 'P' || inputString[i] == 'S')) {
                // Make Chef win for 'P' and 'S'
                result[i] = (inputString[i] == 'P') ? 'S' : 'R';
                remainingWins -= 1;
            }
        }

        // Output the result
        for (char c : result) {
            cout << c;
        }
        cout << endl;
        
        
        
        
        
        
        
        
        
        
        
        
        // 
        
        
         //
          //
           //
        //    SALAAR
    }

    return 0;
}