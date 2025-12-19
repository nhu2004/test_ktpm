#include <iostream>
using namespace std;

int findMax_bug(int num1, int num2, int num3) {
    int max = 0;
    if ((num1 > num2) && (num1 > num3)) max = num1;
    if ((num2 > num1) && (num2 > num3)) max = num2;
    if ((num3 > num1) && (num3 > num2)) max = num3;
    return max;
}

int main() {
    // Test cases
    int testCases[4][3] = {
        {5, 3, 2},
        {3, 5, 2},
        {2, 3, 5},
        {5, 5, 3}
    };

    int expectedResults[4] = {5, 5, 5, 5};

    for (int i = 0; i < 4; i++) {
        int actual = findMax_bug(testCases[i][0], testCases[i][1], testCases[i][2]);
        cout << "Test case (" 
             << testCases[i][0] << ", " 
             << testCases[i][1] << ", " 
             << testCases[i][2] << "):\n";
        cout << "Actual: " << actual << "\n";
        cout << "Expected: " << expectedResults[i] << "\n\n";
    }

    return 0;
}