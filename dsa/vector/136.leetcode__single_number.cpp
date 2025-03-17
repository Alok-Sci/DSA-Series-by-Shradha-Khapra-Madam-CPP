#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int uniqueVal = 0;
    for (int val : nums)
    {
        uniqueVal ^= val;
    }
    return uniqueVal;
}
int main()
{

    vector<int> nums;

    /// ! insert elements in vector [no limit - no length defined]
    char choice = 'N';
    do
    {
        /// * get the input
        cout << "Enter an element into vector: ";
        int insertValue;
        cin >> insertValue;

        /// * insert the element
        nums.push_back(insertValue);

        /// * ask for user's choice to whether or not inser more elements
        cout << "Please press 'Y' to insert more elements, and 'N' to dismiss. (Default is 'N')" << endl;
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    /// ! output all the inserted element (one by one)
    /// * as the vectors has dynamic length, therefore we can use forEach loop for accessing the values of vector
    cout << "[";
    for (int val : nums)
    {
        cout << val << ", ";
    }
    cout << "\b\b]" << endl;

    cout << "Unique element in vector is: " << singleNumber(nums) << endl;

    return 0;
}