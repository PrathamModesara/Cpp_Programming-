#include <iostream>
using namespace std;

// Function Template
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Class Template
template <class T>
class Demo {
public:
    T value;

    Demo(T v) {
        value = v;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {

    // Function template
    cout << add(2, 3) << endl;         
    cout << add(2.5, 3.5) << endl;     

    // Class template
    Demo<int> d1(10);
    d1.display();

    Demo<float> d2(5.5);
    d2.display();
    return 0;
}