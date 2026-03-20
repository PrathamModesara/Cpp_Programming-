#include <iostream>
using namespace std;

class Demo {

public:
    int x;

    // Default Constructor
    Demo() {
        x = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Demo(int a) {
        x = a;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj) {
        x = obj.x;
        cout << "Copy Constructor Called" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor Called" << endl;
    }

    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {

    Demo d1;          // default constructor
    d1.display();

    Demo d2(10);      // parameterized constructor
    d2.display();

    Demo d3 = d2;     // copy constructor
    d3.display();

    return 0;
}