#include <iostream>
using namespace std;

// diamondRadius = 3
//  _ _ * _ _
//  _ * _ * _
//  * _ _ _ *
//  _ * _ * _
//  _ _ * _ _

// * if reached mid (row == diamondRadius)

// ! conditions for printing stars for:

// * quadrant 1 (top right)
// * (row < midIndex && col > midIndex) && ((col - row) == midIndex)

// * quadrant 2 (top left)
// * (row <= midIndex && col <= midIndex) && ((row + col) == midIndex)

// * quadrant 3 (bottom left)
// * (row > midIndex && col < midIndex) && ((col - row) == midIndex)

// * quadrant 4 (bottom right)
// * (row >= midIndex && col >= midIndex) && ((col + row) == (midIndex * 3))
int main()
{
    int diamondRadius;

    cout << "Enter the radius of the diamond: ";
    cin >> diamondRadius;

    bool reachedMid = false;
    int lastIndex = diamondRadius * 2 - 1;
    int midIndex = diamondRadius - 1;

    for (int row = 0; row <= lastIndex; row++)
    {
        if (row == diamondRadius)
            reachedMid = true;
        for (int col = 0; col <= lastIndex; col++)
        {
            // if ((!reachedMid && (col == midIndex + row || col == midIndex - row)) ||
            //     (reachedMid && (col == row - diamondRadius + 1 || (col == row + diamondRadius && col != diamondRadius + 1))))
            // * quad 1
            if (((row < midIndex && col > midIndex) && ((col - row) == midIndex)) ||
                // * quad 2
                ((row <= midIndex && col <= midIndex) && ((row + col) == midIndex)) ||
                // * quad 3
                ((row > midIndex && col < midIndex) && ((row - col) == midIndex)) ||
                // * quad 4
                ((row >= midIndex && col >= midIndex) && ((col + row) == (midIndex * 3))))
                cout
                    << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}