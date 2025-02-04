#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    // * marks >= 90 --> A
    // * marks 80 - 90 --> B
    // * marks < 80 --> C

    cout << "Your grade is ";
    if (marks >= 90)
    {
        cout << "A\n";
    }
    else if (marks > 80 && marks < 90)
    {
        cout << "B\n";
    }
    else
    {
        cout << "C\n";
    }

    return 0;
}