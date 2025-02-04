#include <iostream>
using namespace std;

const char FIRST_ALPHABET = 'A';
const int TOTAL_ALPHABET_COUNT = 25;
int main()
{
    int length, counter = 0;

    cout << "Enter the length of the pyramid: ";
    cin >> length;

    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << (char)(FIRST_ALPHABET + (counter++ % TOTAL_ALPHABET_COUNT)) << "  ";
        }
        cout << endl;
    }
    return 0;
}