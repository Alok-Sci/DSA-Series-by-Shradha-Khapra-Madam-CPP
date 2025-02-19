/// * Write a function to print all the unique values in an array

#include <iostream>
using namespace std;

/// * filter unique array elements from an array
void filterUniqueArrayElements(int arr[], int arrSize, int i = 0, int j = 0)
{
    /// * if sum of iterator1 and iterator2 exeeds the last index, return
    if (i >= arrSize)
        return;

    /// * if (left index + right index == the last index) AND (left element != right element)
    /// * then print the element
    if ((j == (arrSize - 1)) && arr[i] != arr[j])
        cout << arr[i] << ", ";

    /// * if (left index == right index), select the next index as the right index
    if (j == i)
    {
        j++;
    }
    /// * if (left index + right index == the last index) OR (left element == right element)
    /// * then select the next index as left index, also reset the right index to 0
    else if ((j == (arrSize - 1)) || (arr[i] == arr[j]))
    {
        ++i;
        j = 0;
    }
    /// * else select the next index as the right index
    else
    {
        ++j;
    }

    /// * if execution has made it this far then the next array element will be used for comparison
    filterUniqueArrayElements(arr, arrSize, i, j);
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

    /// * evaluate and filter out the unique elements in the array
    /// * output all array elements
    cout << "Filtered array with all unique elements: ";
    cout << "[";
    filterUniqueArrayElements(arr, arrSize);
    cout << "\b\b]";
    cout << endl;

    return 0;
}