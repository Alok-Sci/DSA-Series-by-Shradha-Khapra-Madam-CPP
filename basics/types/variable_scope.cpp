#include <iostream>
using namespace std;

/// * "Variable Scope" OR simply "Scope": is the area or the part of the program from where the variable can be accessed

/// ! Types of scopes
/// * 1. Local Scope:
/// *    - is declared and can be used within a block, conditional statement, loop, class, or method.

/// * 2. Global Scope:
/// *    - is declared directly into the file (outside of any class, method, function or block)
/// *    - can be used from anywhere in the entire file (from a class, method, function or block)
int globalVar = 100;

/// * function
void func()
{
    int localVar = 90;
    cout << "Local variable[func]: " << localVar << endl;
    cout << "Global variable[func]: " << globalVar << endl;
}

int main()
{
    /// * main
    int localVar = 50;
    cout << "Local variable[main]: " << localVar << endl;
    cout << "Global variable[main]: " << globalVar << endl;

    /// * conditional statement
    if (true)
    {
        int localVar = 40;
        cout << "Local variable[conditional statement(if)]: " << localVar << endl;
        cout << "Global variable[conditional statement(if)]: " << globalVar << endl;
    }
    else
    {
        int localVar = 30;
        cout << "Local variable[conditional statement(else)]: " << localVar << endl;
        cout << "Global variable[conditional statement(else)]: " << globalVar << endl;
    }

    /// * loop
    for (int localVar = 53; localVar >= 50; localVar--)
    {
        cout << "Local variable[loop]: " << localVar << endl;
        cout << "Global variable[loop]: " << globalVar << endl;
    }

    /// * block
    {
        int localVar = 99;
        cout << "Local variable[block{}]: " << localVar << endl;
        cout << "Global variable[block{}]: " << globalVar << endl;
    }

    /// * function call
    func();
}