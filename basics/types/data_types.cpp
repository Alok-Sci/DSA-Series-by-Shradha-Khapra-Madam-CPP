#include <iostream>

using namespace std;

int main()
{
    // * Primitive Data Types
    int grade = 1;
    char section = 'A';
    double percentage = 70.8999999;
    float cgpa = 5.8f;   // * omitting 'f' will make the value of type double
    bool isAdult = true; // * boolean value is converted (true -> 1; false -> 0) before getting stored in the memory

    // * output the values of primitive data types
    cout << "Int: " << grade << endl;
    cout << "Char: " << section << endl;
    cout << "Double: " << percentage << endl;
    cout << "Float: " << cgpa << endl;
    cout << "Boolean: " << isAdult << endl;

    // * output the size of primitive data types
    cout << "Size of Int: " << sizeof(grade) << endl; // ! 4 bytes
    cout << "Size of Char: " << sizeof(section) << endl; // *!1 byte
    cout << "Size of Double: " << sizeof(percentage) << endl; // ! 8 bytes
    cout << "Size of Float: " << sizeof(cgpa) << endl; // ! 4 bytes
    cout << "Size of Boolean: " << sizeof(isAdult) << endl; // ! 1 byte

    // * Non primitive data types
    string name = "Alok Singh";

    // * output the values of primitive data types
    cout << "String: " << name << endl; 

    // * output the size of primitive data types
    cout << "Size of String: " << sizeof(name) << endl; // ! 32 bytes
    return 0;
}