/// * WAF to output the intersection of two arrays [common elements among the two arrays]
#include <iostream>
using namespace std;

/// * Find the intersection elements between both the arrays
void getIntersectionOfTwoArrays(int arr1[], int arr2[], int arr1Size, int arr2Size, int i = 0, int j = 0)
{
    /// * if reached to the last element of the array1 and array2 then return
    if (i >= arr1Size - 1 && j >= arr2Size - 1)
        return;

    /// * compare all the elements of first array with the all the elements of the second array (one by one)
    /// * if equal then print the element
    if (arr1[i] == arr2[j])
        cout << arr1[i] << ", ";

    /// * if the counter for second array reaches the end,
    /// * then reset j to 0, and increment i
    if (j == arr2Size - 1)
    {
        ++i;
        j = 0;
    }
    /// * else increment the j
    else
    {
        ++j;
    }

    /// * recursively solve the problem
    getIntersectionOfTwoArrays(arr1, arr2, arr1Size, arr2Size, i, j);
}

int main()
{
    /// * input the array size
    int arr1Size;
    cout << "Enter the size for the 1st array: ";
    cin >> arr1Size;

    /// * input the elements in array
    int arr1[arr1Size];
    for (int i = 0; i < arr1Size; i++)
    {
        cout << "arr1[" << i << "]: ";
        cin >> arr1[i];
    }

    /// * output all array elements
    cout << "1st Original array: ";
    for (int i = 0; i < arr1Size; i++)
    {
        if (i == 0)
            cout << "[";
        cout << arr1[i];
        if (i == arr1Size - 1)
            cout << "]";
        else
            cout << ", ";
    }
    cout << endl;

    /// * input the array size
    int arr2Size;
    cout << "Enter the size for the 2nd array: ";
    cin >> arr2Size;

    /// * input the elements in array
    int arr2[arr2Size];
    for (int i = 0; i < arr2Size; i++)
    {
        cout << "arr2[" << i << "]: ";
        cin >> arr2[i];
    }

    /// * output all array elements
    cout << "2nd Original array: ";
    for (int i = 0; i < arr2Size; i++)
    {
        if (i == 0)
            cout << "[";
        cout << arr2[i];
        if (i == arr2Size - 1)
            cout << "]";
        else
            cout << ", ";
    }
    cout << endl;

    /// * find the intersection of two arrays
    cout
        << "Intersected elements of both the arrays: ";
    cout << "[";
    getIntersectionOfTwoArrays(arr1, arr2, arr1Size, arr2Size);
    cout << "\b\b]";
    cout << endl;

    return 0;
}