#include <iostream>
using namespace std;

int sumOfArrayElements(int arr[], int arrSize, int counter = 0)
{
    /// * if counter reached the last element then return the element
    if (counter == arrSize - 1)
        return arr[counter];
    return arr[counter] + sumOfArrayElements(arr, arrSize, ++counter);
}
int productOfArrayElements(int arr[], int arrSize, int counter = 0)
{
    /// * if counter reached the last element then return the element
    if (counter == arrSize - 1)
        return arr[counter];
    return arr[counter] * sumOfArrayElements(arr, arrSize, ++counter);
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

    cout << "Sum of all array elements is: " << sumOfArrayElements(arr, arrSize) << endl;
    cout << "Sum of all array elements is: " << productOfArrayElements(arr, arrSize) << endl;
}