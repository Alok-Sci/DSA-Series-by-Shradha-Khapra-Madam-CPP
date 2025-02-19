#include <iostream>
using namespace std;

/// * Example of pass by reference
/// * when arrays are passed to a method, then in arguments the reference/memory address/pointer of the array is passed in real
/// * therefore, any changes done to the array inside any method will result in the change in the actual array outside of the method.

/// * reverse the array
void reverseArray(int arr[], int size)
{
    int i = 0;
    /// * loop until left index is less than right index then swap both elements
    while (i < size - 1 - i)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;

        i++;
    }

    /// * output the reversed array
    cout << "Reversed array[in reverseArray()]: [";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i == size - 1)
            cout << "]";
        else
            cout << ", ";
    }
    cout << endl;
}
int main()
{
    /// * input array size
    int arrSize;
    cout << "Define array's size: ";
    cin >> arrSize;

    /// * define array of input array size
    int dynamicArray[arrSize];

    /// * input elements in the array
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter dynamicArray[" << i << "]: ";
        cin >> dynamicArray[i];
    }

    /// * reverse the array
    reverseArray(dynamicArray, arrSize);

    /// * output the reversed array
    cout << "Reversed array[in main]: [";
    for (int i = 0; i < arrSize; i++)
    {
        cout << dynamicArray[i];
        if (i == arrSize - 1)
            cout << "]";
        else
            cout << ", ";
    }
    return 0;
}