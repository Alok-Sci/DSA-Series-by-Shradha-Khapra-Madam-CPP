#include <iostream>
using namespace std;

// 1
// 2 1
// 3 2 1
int main()
{
    int length;

    cout << "Enter the length of the pyramid: ";
    cin >> length;

    // * This logic too works
    for (int row = 1; row <= length; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << row - col << "  ";
        }
        cout << endl;
    }

    cout << endl;

    // * backward loop logic
    for (int row = 1; row <= length; row++)
    {
        for (int col = row; col > 0; col--)
        {
            cout << col << "  ";
        }
        cout << endl;
    }
    return 0;
}