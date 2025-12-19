#include <iostream> 
using namespace std;

int f1(int x) {
    if (x > 10) return 2 * x;
    else return -x;
}

int main() {
    cout << "Bai 1 - Test f1" << endl;
    cout << "f1(11) = " << f1(11) << " (Expected: 22)" << endl;
    cout << "f1(-3) = " << f1(-3) << " (Expected: 3)" << endl;
    return 0;
}

# %%
!g++ lab1_testa.cpp -o lab1_testa
!./lab1_testa >> out.txt

# %% [markdown]
# ## Bài 2

# %%
%%writefile lab1_testb.cpp
#include <iostream>
using namespace std;

int f1(int x) {
    if (x > 10) return 2 * x;
    else if (x > 0) return -x;
    else return 2 * x;
}

int main() {
    cout << "Bai 2 - Test f1" << endl;
    cout << "f1(11) = " << f1(11) << " (Expected: 22)" << endl;
    cout << "f1(8) = " << f1(8) << " (Expected: -8)" << endl;
    cout << "f1(-3) = " << f1(-3) << " (Expected: -6)" << endl;
    return 0;
}

# %%
!g++ lab1_testb.cpp -o lab1_testb
!./lab1_testb >> out.txt

# %% [markdown]
# ## Bài 3

# %%
%%writefile lab1_testc.cpp
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

# %%
!g++ lab1_testc.cpp -o lab1_testc
!./lab1_testc >> out.txt

# %% [markdown]
# ## Bài 4

# %%
%%writefile lab1_testd.cpp
#include <iostream>
#include <cmath>
using namespace std;

int f3(int x) {
    if (x != 0 && log(x * x * cos(x)) < 3 * x) return 2 * x;
    else return 2 * x;
}

int main() {
    cout << "Bai 4 - Test f3" << endl;
    cout << "f3(0) = " << f3(0) << " (Expected: 22)" << endl;
    cout << "f3(1) = " << f3(1) << " (Expected: 20)" << endl;
    cout << "f3(2) = " << f3(2) << " (Expected: 22)" << endl;
    return 0;
}

# %%
!g++ lab1_testd.cpp -o lab1_testd
!./lab1_testd >> out.txt

# %% [markdown]
# ## Bài 5

# %%
%%writefile lab1_teste.cpp
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
    cout << "Bai 5 - Test findMax_bug" << endl;
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

# %%
!g++ lab1_teste.cpp -o lab1_teste
!./lab1_teste >> out.txt

# %% [markdown]
# ## Xem nội dung out.txt

# %%
!cat out.txt
