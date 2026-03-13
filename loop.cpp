#include <iostream>
using namespace std;

int main() {

    int i;

    // for loop
    cout << "For Loop:" << endl;

    for(i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // while loop
    cout << "\nWhile Loop:" << endl;

    i = 1;
    while(i <= 5) {
        cout << i << " ";
        i++;
    }

    cout << endl;

    // do-while loop
    cout << "\nDo-While Loop:" << endl;
    i = 1;
    do {
        cout << i << " ";
        i++;
    } while(i <= 5);
    cout << endl;
    return 0;
}