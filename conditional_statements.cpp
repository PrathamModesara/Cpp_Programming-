#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    // if statement
    if (num > 0) {
        cout << "Number is positive" << endl;
    }

    // if-else statement
    if (num % 2 == 0) {
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }

    // nested if
    if (num > 0) {
        if (num > 100) {
            cout << "Number is greater than 100" << endl;
        }
    }

    // else-if ladder
    if (num > 0) {
        cout << "Positive number" << endl;
    } 
    else if (num < 0) {
        cout << "Negative number" << endl;
    } 
    else {
        cout << "Number is zero" << endl;
    }

    // switch statement
    int choice;

    cout << "\nEnter number between 1-3: ";
    cin >> choice;

    switch(choice) {

        case 1:
            cout << "You selected One" << endl;
            break;

        case 2:
            cout << "You selected Two" << endl;
            break;

        case 3:
            cout << "You selected Three" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}