#include <iostream>
using namespace std;

int main()
{

    int arrSize = 5;
    int dynamicArray[arrSize];
    int largestElementIdx = 0;
    int smallestElementIdx = 0;

    /// * input elements in the array
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter dynamicArray[" << i << "]: ";
        cin >> dynamicArray[i];

        /// * get the smallest among dynamicArray[i], dynamicArray[smallestElementIdx] and assign the index to the smallestElement.
        /// * get the largest among dynamicArray[i], dynamicArray[largestElementIdx] and assign the index to the largestElement.
        if (dynamicArray[smallestElementIdx] > dynamicArray[i])
            smallestElementIdx = i;
        if (dynamicArray[largestElementIdx] < dynamicArray[i])
            largestElementIdx = i;
    }
    cout << "Largest number in the array is at index: " << largestElementIdx << endl;
    cout << "Smallest number in the array is at index: " << smallestElementIdx << endl;
    return 0;
}