#include <iostream>

/// * include the vector DS from STL (Standard Template Library)
/// * so that we do not have to implement a vector from scratch
#include <vector>
using namespace std;

/// ! vectors are almost similar to arrays,
/// * the only difference is that vectors can have dynamic size,
/// * whereas arrays have fixed size.
int main()
{
    /// ! vector definition
    /// * vector of type int
    vector<int> vecWithNoAssignment; // default value 0 will be stored

    vector<int> vecWithElements = {2, 4, 5}; // assign 3 elements

    vector<int> vecWithDefaultValueAtEachIndex(5, 3); // will create a vector of length 5 with each element has value = 3

    /// ! access element at specific index
    cout << "Vector's element at index 1: " << vecWithElements[1] << endl;

    /// ! insert element at specific index
    cout << "Insert element in vector at index 1: ";
    cin >> vecWithElements[1];
    cout << "Changed value index 1: " << vecWithElements[1] << endl;

    /// ! insert elements in vector [no limit - no length defined]
    char choice = 'N';
    do
    {
        /// * get the input
        cout << "Enter an element into vector: ";
        int insertValue;
        cin >> insertValue;
        
        /// * insert the element
        vecWithNoAssignment.push_back(insertValue);

        /// * ask for user's choice to whether or not inser more elements
        cout << "Please press 'Y' to insert more elements, and 'N' to dismiss. (Default is 'N')" << endl;
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    /// ! output all the inserted element (one by one)
    /// * as the vectors has dynamic length, therefore we can use forEach loop for accessing the values of vector
    cout << "[";
    for (int val : vecWithNoAssignment)
    {
        cout << val << ", ";
    }
    cout << "\b\b]" << endl;

    return 0;
}