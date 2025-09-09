// f1_bug_tc1_x11.cpp
// Test buggy f1 with x=11 -> expected 22

#include <iostream>
using namespace std;

int f1(int x) {
    if (x > 10) return 2 * x;
    else if (x > 0) return -x;
    else return 2 * x;
}

int main() {
    cout << "Test f1" << endl;
    cout << "f1(11) = " << f1(11) << " (Expected: 22)" << endl;
    cout << "f1(8) = " << f1(8) << " (Expected: -8)" << endl;
    cout << "f1(-3) = " << f1(-3) << " (Expected: -6)" << endl;
    return 0;
}
