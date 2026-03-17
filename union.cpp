#include <iostream>
using namespace std;

// Union
union Data {
    int i;
    float f;
    char c;
};

int main() {

    Data d;

    cout << "Union Example:" << endl;

    d.i = 10;
    cout << "Integer: " << d.i << endl;

    d.f = 3.14;
    cout << "Float: " << d.f << endl;

    d.c = 'A';
    cout << "Character: " << d.c << endl;

    // Difference Explanation
    cout << "\nDifference between Structure and Union:" << endl;

    cout << "1. Structure allocates separate memory for each member." << endl;
    cout << "2. Union shares the same memory for all members." << endl;
    cout << "3. Structure can store multiple values at once." << endl;
    cout << "4. Union stores only one value at a time." << endl;

    return 0;
}