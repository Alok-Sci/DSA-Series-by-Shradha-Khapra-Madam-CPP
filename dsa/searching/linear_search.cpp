#include <iostream>
using namespace std;

/// * Search the target in the array, and return the index of the target if found (otherwise -1)
int linearSearch(int arr[], int arrSize, int target, int counter = 0)
{
    /// * if target does not exist in the array, return -1
    if (counter == arrSize - 1)
        return -1;

    /// * compare array element(counter) with target
    if (arr[counter] == target)
        return counter;

    /// * recursively search the target in the array
    return linearSearch(arr, arrSize, target, ++counter);
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

    /// * input the element to search
    int target;
    cout << "Please enter the number you want to search in the array: ";
    cin >> target;

    /// * if target exist in the array then return the index of the element
    /// * else return -1
    int resultIndex = linearSearch(arr, arrSize, target);

    if (resultIndex > -1)
        cout << "The index of the " << target << " is " << resultIndex << endl;
    else
        cout << "The " << target << " does not exist in the array.";

    return 0;
}