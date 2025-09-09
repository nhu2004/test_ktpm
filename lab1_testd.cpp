#include <iostream>
#include <cmath>
using namespace std;

int f3(int x) {
    if (log(x * x * cos(x)) < 3 * x) return 2 * x;
    else return 2 * x;
}

int main() {
    cout << "Test f3" << endl;
    cout << "f3(0) = " << f3(0) << " (Expected: 22)" << endl;
    cout << "f3(1) = " << f3(1) << " (Expected: 20)" << endl;
    cout << "f3(2) = " << f3(2) << " (Expected: 22)" << endl;
   
    return 0;
}