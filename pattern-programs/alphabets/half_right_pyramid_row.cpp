#include <iostream>
using namespace std;

const char FIRST_ALPHABET = 'A';
const int TOTAL_ALPHABETS_COUNT = 25;
int main()
{
    int length;

    cout << "Enter the length of the pyramid: ";
    cin >> length;

    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << (char)(FIRST_ALPHABET + (row % TOTAL_ALPHABETS_COUNT)) << "  ";
        }
        cout << endl;
    }
    return 0;
}