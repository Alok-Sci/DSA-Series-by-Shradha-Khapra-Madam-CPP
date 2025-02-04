#include <iostream>
using namespace std;

// *       1
// *     1 2 1
// *   1 2 3 2 1
// * 1 2 3 4 3 2 1

// length = 4
// line 1 = 3 space , 1
// line 2 = 2 space , 121

int main()
{
    int heightOfPyramid;

    cout << "Enter the height of the pyramid: ";
    cin >> heightOfPyramid;

    for (int row = 1; row <= heightOfPyramid; row++)
    {
        int counter = 1;
        for (int col = 0; col < (heightOfPyramid + row); col++)
        {
            if (col < heightOfPyramid - row + 1)
                cout << "  ";
            else
            {
                if (counter < row && col < heightOfPyramid)
                    cout << counter++ << " ";
                else
                    cout << counter-- << " ";
            }
        }
        cout << endl;
    }
}