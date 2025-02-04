#include <iostream>
using namespace std;

const char FIRST_ALPHABET = 'A';
const int TOTAL_ALPHABET_COUNT = 25;
int main()
{
    int length;

    cout << "Enter the length of the pyramid: ";
    cin >> length;

    for (int row = 1; row <= length; row++)
    {
        for (int col = row; col > 0; col--)
        {
            cout << (char)(FIRST_ALPHABET + (col % TOTAL_ALPHABET_COUNT) -  1) << "  ";
        }
        cout << endl;
    }
    return 0;
}