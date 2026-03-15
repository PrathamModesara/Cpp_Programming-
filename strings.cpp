#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // C-Style Strings
    cout << "C-Style Strings:" << endl;

    char str1[20] = "Hello";
    char str2[20] = "World";

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    // String Functions
    cout << "\nString Functions:" << endl;

    cout << "Length of str1: " << strlen(str1) << endl;

    strcat(str1, str2); 
    cout << "After concatenation: " << str1 << endl;

    strcpy(str2, "C++");
    cout << "After copy: " << str2 << endl;

    cout << "Compare strings: " << strcmp(str1, str2) << endl;

    // String Class
    cout << "\nString Class:" << endl;

    string s1 = "Programming";
    string s2 = "Language";

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    // String Operations
    cout << "\nString Operations:" << endl;

    string s3 = s1 + " " + s2;
    cout << "Concatenated string: " << s3 << endl;

    cout << "Length of s3: " << s3.length() << endl;

    cout << "First character of s3: " << s3[0] << endl;

    s3.append(" Example");
    cout << "After append: " << s3 << endl;

    return 0;
}