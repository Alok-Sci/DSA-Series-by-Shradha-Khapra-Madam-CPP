#include <iostream>
using namespace std;

int main()
{
    int length;

    cout << "Enter the length of the pyramid: ";
    cin >> length;

    for (int row = 1; row <= length; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col << "  ";
        }
        cout << endl;
    }
    return 0;
}