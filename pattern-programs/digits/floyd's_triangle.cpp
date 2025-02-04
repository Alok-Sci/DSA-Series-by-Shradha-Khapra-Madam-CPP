#include <iostream>
using namespace std;

int main()
{
    int length, counter = 1;

    cout << "Enter the length of the pyramid: ";
    cin >> length;

    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << counter++ << "  ";
        }
        cout << endl;
    }
    return 0;
}