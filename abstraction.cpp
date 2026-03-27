#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;
};

// Derived class
class Rectangle : public Shape {
private:
    int length, width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void area() {
        cout << length * width << endl;   
    }
};

int main() {

    Shape *s;
    Rectangle r(5, 4);

    s = &r;
    s->area(); 

    return 0;
}