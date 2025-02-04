#include <iostream>
using namespace std;

int main()
{
    // * take user defined value for square length
    int squareLength;

    cout << "Enter the length of square: ";
    cin >> squareLength;

    for (int row = 0; row < squareLength; row++)
    {
        for (int col = 0; col < squareLength; col++){
            cout << "* ";
        }
        cout << endl;
    }
}