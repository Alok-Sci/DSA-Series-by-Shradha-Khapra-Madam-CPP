#include <iostream>
using namespace std;

const char FIRST_ALPHABET = 'A';
const int TOTAL_ALPHABET_COUNT = 25;
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
                cout << (char)(FIRST_ALPHABET + (row % TOTAL_ALPHABET_COUNT)) << " ";
        }
        cout << endl;
    }
}