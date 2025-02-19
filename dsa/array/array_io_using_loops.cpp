#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int dynamicArray[size];

    /// * use for loop to input elements to an array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter dynamicArray[" << i << "]: ";
        cin >> dynamicArray[i];
    }

    /// * use for loop to output all array elements
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            cout << "[";
        cout << dynamicArray[i];
        if (i == size - 1)
            cout << "]";
        else
            cout << ", ";
    }
    return 0;
}