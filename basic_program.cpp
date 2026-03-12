#include <iostream>
using namespace std;

int main() {

    // Variables and Data Types
    int age = 21;
    float height = 5.8;
    double salary = 45000.75;
    char grade = 'A';
    bool isStudent = true;

    cout << "===== Variables and Data Types =====" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Salary: " << salary << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    // Input / Output
    int number;

    cout << "\nEnter a number: ";
    cin >> number;

    cout << "You entered: " << number << endl;

    // Constants
    const float PI = 3.14159;

    cout << "\nConstant PI = " << PI << endl;

    // Type Casting
    int a = 10;
    int b = 3;

    float result = (float)a / b;   

    cout << "\nType Casting Example:" << endl;
    cout << "a / b = " << result << endl;

    return 0;
}