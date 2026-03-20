#include <iostream>
using namespace std;

class Student {

public:         // public access
    int id;
    string name;

protected:      // protected access
    int age;

private:        // private access
    float marks;

public:
    // function to set private data
    void setData(int a, float m) {
        age = a;
        marks = m;
    }

    // function to display all data
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    // Object creation
    Student s1;

    s1.id = 1;
    s1.name = "Pratham";

    s1.setData(21, 88.5);

    cout << "Class & Object Example:" << endl;
    s1.display();

    return 0;
}