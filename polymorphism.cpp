#include <iostream>
using namespace std;

// Function Overloading
class Math {
public:
    int add(int a, int b) {
        return a + b;  
    }

    float add(float a, float b) {
        return a + b; 
    }
};

// Operator Overloading
class Complex {
public:
    int real, imag;

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " " << imag << endl;  
    }
};

// Function Overriding
class Base {
public:
    virtual void show() {
        cout << "1" << endl;   
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "2" << endl;   
    }
};

int main() {

    Math m;

    cout << m.add(2, 3) << endl;       
    cout << m.add(2.5f, 3.5f) << endl; 

    // Operator Overloading
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    c3.display();   // 6 8

    // Function Overriding
    Base *b;
    Derived d;
    b = &d;
    b->show();   

    return 0;
}