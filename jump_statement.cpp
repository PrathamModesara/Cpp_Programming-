#include <iostream>
using namespace std;

int main() {

    int i;

    // break statement
    cout << "Break Example:" << endl;

    for(i = 1; i <= 10; i++) {

        if(i == 5) {
            break;
        }

        cout << i << " ";
    }

    cout << endl;

    // continue statement
    cout << "\nContinue Example:" << endl;

    for(i = 1; i <= 10; i++) {

        if(i == 3) {
            continue;
        }

        cout << i << " ";
    }

    cout << endl;

    // goto statement
    cout << "\nGoto Example:" << endl;

    i = 1;

start:

    if(i <= 5) {
        cout << i << " ";
        i++;
        goto start;
    }
    cout << endl;
    return 0;
}