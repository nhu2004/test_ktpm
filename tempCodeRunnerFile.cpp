#include <iostream>
using namespace std;

int f1_bug(int x) {
    if (x > 10) return 2 * x;
    else if (x > 0) return -x;
    else return 2 * x;
}