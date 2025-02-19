#include <iostream>
using namespace std;

int main()
{
    int arrSize = 5;
    int dynamicArray[arrSize];
    int smallestElement = 0;

    /// * input elements in the array
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter dynamicArray[" << i << "]: ";
        cin >> dynamicArray[i];

        /// * if smallestElement is greater than the current input number then make that number the smallest.
        if (smallestElement > dynamicArray[i])
            smallestElement = dynamicArray[i];
    }
    cout << "Smallest number in the array is: " << smallestElement << endl;
    return 0;
}