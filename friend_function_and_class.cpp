#include <iostream>
using namespace std;

class A {

private:
    int x;

public:
    A() {
        x = 10;
    }

    friend void show(A obj);

    friend class B;
};

void show(A obj) {
    cout << obj.x << endl;  
}

class B {
public:
    void display(A obj) {
        cout << obj.x << endl;  
    }
};

int main() {

    A a;

    show(a);

    B b;
    b.display(a);
    
    return 0;
}