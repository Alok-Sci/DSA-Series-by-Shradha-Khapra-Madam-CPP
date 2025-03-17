#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {4, 6, 1};

    /// * vector functions are used to perform data operations on vector
    /// ! length
    cout << "size of vec: " << vec.size() << endl;
    
    /// ! insertion
    cout << "Insert an element at last: ";
    int value;
    cin >> value;
    vec.push_back(value);

    /// ! access first element
    cout << "First element: " << vec.front() << endl;

    /// ! access last element
    cout << "Last element: " << vec.back() << endl;

    /// ! deletion
    vec.pop_back();
    cout << "Last element[after deletion]: " << vec.back() << endl;

    /// ! access element at specific position
    cout << "Element at index 2: " << vec.at(2) << endl;

    return 0;
}
