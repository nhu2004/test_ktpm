#include <iostream>
using namespace std;

int f1(int x) {
    if (x > 10) return 2 * x;
    else return -x;
}

int main() {
    cout << "Test f1" << endl;
    cout << "f1(11) = " << f1(11) << " (Expected: 22)" << endl;
    cout << "f1(10) = " << f1(10) << " (Expected: -10)" << endl;
    cout << "f1(-3) = " << f1(-3) << " (Expected: 3)" << endl;
    return 0;
}