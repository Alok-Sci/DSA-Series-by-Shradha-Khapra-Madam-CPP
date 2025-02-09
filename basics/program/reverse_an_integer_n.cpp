/// * Q. WAF to reverse an integer n

#include <iostream>
using namespace std;

int reverseIntN(int num)
{
    int reverseNum = 0;

    while (num > 0)
    {
        // * extract the last digit from num
        int lastDigit = num % 10;

        // * remove the last digit from num
        num /= 10;

        // * multiply by 10
        reverseNum *= 10;

        // * add last digit to the reverseNum
        reverseNum += lastDigit;
    }
    return reverseNum;
}
int main()
{
    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;

    cout << "Reverse of " << num << " is " << reverseIntN(num) << endl;
    return 0;
}