#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Writing to file
    ofstream outFile("data.txt");

    outFile << 100 << endl;
    outFile << 200 << endl;

    outFile.close();
    
    // Reading from file
    ifstream inFile("data.txt");

    int num;

    cout << "File Data:" << endl;

    while(inFile >> num) {
        cout << num << endl;
    }

    inFile.close();

    return 0;
}