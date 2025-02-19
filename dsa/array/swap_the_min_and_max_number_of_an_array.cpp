/// * WAF to swap min and max number of an array

#include <iostream>
using namespace std;

/// * 1. find min and max
/// * 2. get index of min and max
/// * 3. swap the min and max
void swapMinAndMax(int arr[], int arrSize, int counter = 0, int min = INT_MAX, int max = INT_MIN, int minIndex = -1, int maxIndex = -1)
{
    /// * if the counter is greater than the array size, return
    if (counter >= arrSize)
        return;

    /// * if min is greater than the current array element, make it min and save the index as well
    if (min > arr[counter])
    {
        min = arr[counter];
        minIndex = counter;
    }

    /// * if max is less than the current array element, make it max and save the index as well
    if (max < arr[counter])
    {
        max = arr[counter];
        maxIndex = counter;
    }

    /// * if reached the last array element, swap the min and max
    if (counter == arrSize - 1)
    {
        int temp = arr[maxIndex];
        arr[maxIndex] = arr[minIndex];
        arr[minIndex] = temp;
    }

    /// * increment the counter and do the tasks recursively
    swapMinAndMax(arr, arrSize, ++counter, min, max, minIndex, maxIndex);
}
int main()
{
    /// * input the array size
    int arrSize;
    cout << "Enter the size for the array that you want to create: ";
    cin >> arrSize;

    /// * input the elements in array
    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    /// * output all array elements
    cout << "Original array: ";
    for (int i = 0; i < arrSize; i++)
    {
        if (i == 0)
            cout << "[";
        cout << arr[i];
        if (i == arrSize - 1)
            cout << "]";
        else
            cout << ", ";
    }
    cout << endl;

    /// * swap min and max elements
    swapMinAndMax(arr, arrSize);

    /// * output all array elements
    cout << "Array after swapping min() and max() values: ";
    for (int i = 0; i < arrSize; i++)
    {
        if (i == 0)
            cout << "[";
        cout << arr[i];
        if (i == arrSize - 1)
            cout << "]";
        else
            cout << ", ";
    }
    cout << endl;
}