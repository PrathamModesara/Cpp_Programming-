#include <iostream>
using namespace std;

// Function using pointer
void modifyValue(int *num) {
    *num = *num + 10;
}

int main() {

    // Pointer Basics
    int a = 10;
    int *ptr = &a;

    cout << "Pointer Basics:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer value (address): " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    // Pointer Arithmetic
    cout << "\nPointer Arithmetic:" << endl;

    int arr[3] = {10, 20, 30};
    int *p = arr;

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;

    // Pointer to Pointer
    cout << "\nPointer to Pointer:" << endl;

    int **pp = &ptr;

    cout << "Value of a using **pp: " << **pp << endl;

    // Pointer with Array
    cout << "\nPointer with Array:" << endl;

    for(int i = 0; i < 3; i++) {
        cout << *(arr + i) << " ";
    }

    cout << endl;

    // Pointer with Function
    cout << "\nPointer with Function:" << endl;

    int num = 5;
    modifyValue(&num);

    cout << "Modified value: " << num << endl;

    // Dynamic Memory Allocation
    cout << "\nDynamic Memory Allocation:" << endl;

    int *dyn = new int;

    *dyn = 50;

    cout << "Dynamic value: " << *dyn << endl;

    delete dyn;

    return 0;
}