#include <iostream>
using namespace std;

int main()
{
    int length;

    cout << "Enter the length of the pyramid: ";
    cin >> length;

    for (int row = 0; row < length; row++)
    {
        for (int col = length; col > 0; col--)
        {
            if (col > (length - row))
                cout << "  ";
            else
                cout << row + 1 << " ";
        }
        cout << endl;
    }
}