#include <iostream>
using namespace std;

// Function to print 1D array
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    // 1D Array
    cout << "1D Array:" << endl;

    int arr1[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }

    cout << endl;

    // Passing array to function
    cout << "\nPassing Array to Function:" << endl;

    printArray(arr1, 5);

    // 2D Array
    cout << "\n2D Array:" << endl;

    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    // Multi-dimensional Array
    cout << "\nMulti-Dimensional Array (3D):" << endl;

    int arr3[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << arr3[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}