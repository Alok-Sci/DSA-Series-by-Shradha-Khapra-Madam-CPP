#include <iostream>
using namespace std;

void reverseArray(int arr[], int arrSize, int counter = 0)
{
    int left = counter;
    int right = arrSize - 1 - counter;

    /// * if left index >= right index, then return
    if (left >= right)
        return;
    /// * if left index is < right index, then swap
    if (left < right)
    {
        /// * swap left and right
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }
    /// * else increase counter and make recursive call
    reverseArray(arr, arrSize, ++counter);
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
    cout << endl;

    /// * output all array elements [original array]
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

    /// * reverse the array
    reverseArray(arr, arrSize);

    /// * output all array elements [reversed array]
    cout << "Reversed array: ";
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