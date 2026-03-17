#include <iostream>
using namespace std;

// Structure
struct Student {
    int id;
    string name;
    float marks;
};

// Nested Structure
struct Address {
    string city;
    int pincode;
};

struct Person {
    string name;
    Address addr;   // nested structure
};

int main() {

    // Structure
    Student s1;

    s1.id = 1;
    s1.name = "Pratham";
    s1.marks = 85.5;

    cout << "Structure Example:" << endl;
    cout << s1.id << " " << s1.name << " " << s1.marks << endl;

    // Array of Structures
    cout << "\nArray of Structures:" << endl;

    Student s[2] = {
        {2, "Rahul", 78.5},
        {3, "Amit", 82.0}
    };

    for(int i = 0; i < 2; i++) {
        cout << s[i].id << " " << s[i].name << " " << s[i].marks << endl;
    }

    // Nested Structure
    cout << "\nNested Structure:" << endl;

    Person p1;

    p1.name = "Namya";
    p1.addr.city = "Ahmedabad";
    p1.addr.pincode = 380001;

    cout << p1.name << " " << p1.addr.city << " " << p1.addr.pincode << endl;

    return 0;
}