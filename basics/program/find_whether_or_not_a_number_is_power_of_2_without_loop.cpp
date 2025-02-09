/// * Q. Find whether or not a number is power of 2 without loop.

#include <iostream>
using namespace std;

bool isNumPowerOf2(int num, int counter = 1)
{
    /// * if counter exceeds the num, return false [as it is not gonna be the power of 2 anymore]
    if (counter > num)
        return false;

    /// * if couter is equal to the num, return true [as we found that the number is power of 2]
    if (num == counter)
        return true;

    /// * if program execution reached this far, then the counter is less than the num
    /// * recursively left shift the counter and call the isNumPowerOf2() until the counter is equal to Or greater than num
    /// 128 64 32 16 8 4 2 1
    /// _  _  _  _  _ _ _ 1 => 1
    /// _  _  _  _  _ _ 1 0 => 2
    /// _  _  _  _  _ 1 0 0 => 4
    /// _  _  _  _  1 0 0 0 => 8
    /// _  _  _  1  0 0 0 0 => 16

    return isNumPowerOf2(num, counter << 1);
    /// isNumPowerOf2(16, 1) => isNumPowerOf2(16, 2) => isNumPowerOf2(16, 4) => isNumPowerOf2(16, 8) => isNumPowerOf2(16, 16) --> true
}

int main()
{
    int num = 16;
    cout << "Please enter the number to find out whether or not it's power of 2: ";
    cin >> num;

    cout << "Number: " << num << " is " << (isNumPowerOf2(num) ? "" : "not ") << "power of 2";
}