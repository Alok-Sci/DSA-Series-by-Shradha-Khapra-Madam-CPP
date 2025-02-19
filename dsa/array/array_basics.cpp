#include <iostream>
using namespace std;

int main()
{
    /// * array declaration & definition
    /// * fixed size array
    int fixedSizeArray[5]; /// * will take up [sizeOf(int) * 5 units] of storage in memory

    /// * declaration and initialization at the same time [without fixed size array]
    int dynamicSizeArray[] = {1, 2, 1, 4, 5}; /// * will take up storage in memory based on the stored elements

    /// * accessing the specific element of the array
    /// * arrayName[index] (index starts from 0 till size - 1)
    cout << "Element of dynamicSizeArray at index 4: " << dynamicSizeArray[4] << endl;

    /// * update the value of a specific element of the array
    cout << "Element of dynamicSizeArray at index 4[before updating]: " << dynamicSizeArray[4] << endl;
    dynamicSizeArray[4] = 50;
    cout << "Element of dynamicSizeArray at index 4[after updating]: " << dynamicSizeArray[4] << endl;


    return 0;
}