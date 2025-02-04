#include <iostream>
using namespace std;

// * * * *
//   * * *
//     * *
//       *

int main()
{
    int length;

    cout << "Enter the length of the pyramid: ";
    cin >> length;

    // * classic logic (with two inner loops)
    for (int row = 0; row < length; row++)
    {
        // * char column
        for (int space = 0; space < row; space++)
        {
            cout << "  ";
        }
        // * char column
        for (int col = length - row; col > 0; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // * my logic using ternary operator (with single inner loop)
    for (int row = 0; row < length; row++)
    {
        // * char column
        for (int col = length; col > 0; col--)
        {
            cout << ((col > length - row) ? "  ": "* ");
        }
        cout << endl;
    }
    return 0;
}