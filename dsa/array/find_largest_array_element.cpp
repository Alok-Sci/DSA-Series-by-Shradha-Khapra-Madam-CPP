#include <iostream>
using namespace std;

int main()
{
    int arrSize = 5;
    int dynamicArray[arrSize];
    int largestElement = 0;

    /// * input elements in the array
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter dynamicArray[" << i << "]: ";
        cin >> dynamicArray[i];

        /// * if largestElement is less than the current input number then make that number the largest.
        if (largestElement < dynamicArray[i])
            largestElement = dynamicArray[i];
    }
    cout << "Largest number in the array is: " << largestElement << endl;
    return 0;
}