#include <iostream>
using namespace std;

// Single Inheritance
class A {
public:
    void displayA() {
        cout << "1 ";
    }
};

class B : public A {
public:
    void displayB() {
        cout << "2 ";
    }
};

// Multilevel Inheritance
class C : public B {
public:
    void displayC() {
        cout << "3 ";
    }
};

// Multiple Inheritance
class D {
public:
    void showD() {
        cout << "4 ";
    }
};

class E : public A, public D {
public:
    void showE() {
        cout << "5 ";
    }
};

// Hierarchical Inheritance
class F : public A {
public:
    void showF() {
        cout << "6 ";
    }
};

class G : public A {
public:
    void showG() {
        cout << "7 ";
    }
};

// Hybrid Inheritance
class H : public B, public D {
public:
    void showH() {
        cout << "8 ";
    }
};

int main() {

    cout << "Single: ";
    B b;
    b.displayA();
    b.displayB();

    cout << "\nMultilevel: ";
    C c;
    c.displayA();
    c.displayB();
    c.displayC();

    cout << "\nMultiple: ";
    E e;
    e.displayA();
    e.showD();
    e.showE();

    cout << "\nHierarchical: ";
    F f;
    G g;
    f.displayA();
    f.showF();
    g.displayA();
    g.showG();

    cout << "\nHybrid: ";
    H h;
    h.displayA();
    h.displayB();
    h.showD();
    h.showH();

    return 0;
}