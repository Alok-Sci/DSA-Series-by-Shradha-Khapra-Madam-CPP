#include <iostream>
using namespace std;

int main()
{
    int sum;
    int num;

    cout << "Enter a number (that you wish to find the sum of all odd number till the entered one): ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "Sum is: " << sum;
    return 0;
}