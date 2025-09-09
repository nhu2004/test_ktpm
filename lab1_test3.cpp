#include <iostream>
using namespace std;

int f2(int x) {
    if (x < 10) return 2 * x;
    else if (x < 2) return -x;
    else return 2 * x;
}

int main() {
    cout << "Bai 3 - Test f2" << endl;
    cout << "f2(11) = " << f2(11) << " (Expected: 22)" << endl;
    cout << "f2(10) = " << f2(10) << " (Expected: 20)" << endl;
    cout << "f2(-3) = " << f2(-3) << " (Expected: -6)" << endl;
    return 0;
}




