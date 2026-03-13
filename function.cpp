#include <iostream>
using namespace std;

// Function Declaration
int add(int, int);
void callByValue(int);
void callByReference(int &);

int main() {

    int a = 10, b = 5;
    int num = 20;

    // Function Call
    int result = add(a, b);
    cout << "Sum = " << result << endl;

    // Call by Value
    callByValue(num);
    cout << "Value after call by value: " << num << endl;

    // Call by Reference
    callByReference(num);
    cout << "Value after call by reference: " << num << endl;

    return 0;
}

// Function Definition
int add(int x, int y) {
    return x + y;
}

// Call by Value Function
void callByValue(int n) {
    n = n + 10;
    cout << "Inside call by value: " << n << endl;
}

// Call by Reference Function
void callByReference(int &n) {
    n = n + 10;
    cout << "Inside call by reference: " << n << endl;
}