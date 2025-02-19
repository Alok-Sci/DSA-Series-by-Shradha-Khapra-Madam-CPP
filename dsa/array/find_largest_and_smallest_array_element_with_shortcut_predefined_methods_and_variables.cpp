#include <iostream>
using namespace std;

int main()
{

    int arrSize = 5;
    int dynamicArray[arrSize];
    int largestElement = INT_MIN;  /// * INT_MIN is the smallest  possible integer value in the program
    int smallestElement = INT_MAX; /// * INT_MAX is the largest possible integer value in the program

    /// * input elements in the array
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter dynamicArray[" << i << "]: ";
        cin >> dynamicArray[i];

        /// * min(): get the smallest among dynamicArray[i], smallestElement and assign to the smallestElement.
        /// * max(): get the largest among dynamicArray[i], largestElement and assign to the largestElement.
        smallestElement = min(dynamicArray[i], smallestElement); 
        largestElement = max(dynamicArray[i], largestElement);
    }
    cout << "Largest number in the array is: " << largestElement << endl;
    cout << "Smallest number in the array is: " << smallestElement << endl;
    return 0;
}