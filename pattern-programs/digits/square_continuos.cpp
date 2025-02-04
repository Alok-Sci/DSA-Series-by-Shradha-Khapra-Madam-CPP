#include <iostream>
using namespace std;

int main()
{
    int squareLength;
    int counter = 1;

    cout << "Enter the length of the square: ";
    cin >> squareLength;

    for (int row = 0; row < squareLength; row++)
    {
        for (int col = 0; col < squareLength; col++)
        {
            cout << counter++ << " ";
        }
        cout << endl;
    }
    return 0;
}