#include <iostream>
using namespace std;

int main() {

    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational Operators
    cout << "\nRelational Operators" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    // Logical Operators
    cout << "\nLogical Operators" << endl;
    cout << "(a>0 && b>0) : " << (a > 0 && b > 0) << endl;
    cout << "(a>0 || b<0) : " << (a > 0 || b < 0) << endl;
    cout << "!(a>b) : " << !(a > b) << endl;

    // Assignment Operators
    cout << "\nAssignment Operators" << endl;

    int x = 5;

    x += 2;
    cout << "x += 2 : " << x << endl;

    x -= 1;
    cout << "x -= 1 : " << x << endl;

    x *= 3;
    cout << "x *= 3 : " << x << endl;

    x /= 2;
    cout << "x /= 2 : " << x << endl;

    // Bitwise Operators
    cout << "\nBitwise Operators" << endl;

    cout << "a & b : " << (a & b) << endl;
    cout << "a | b : " << (a | b) << endl;
    cout << "a ^ b : " << (a ^ b) << endl;
    cout << "~a : " << (~a) << endl;
    cout << "a << 1 : " << (a << 1) << endl;
    cout << "a >> 1 : " << (a >> 1) << endl;

    // Ternary Operator
    cout << "\nTernary Operator" << endl;

    int max = (a > b) ? a : b;

    cout << "Maximum number = " << max << endl;

    // sizeof Operator
    cout << "\nSizeof Operator" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    return 0;
}