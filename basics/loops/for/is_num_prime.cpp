#include <iostream>
using namespace std;

int main()
{
    int num, divisibleCount = 0;

    cout << "Enter a number(to find if it's prime or not): ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            divisibleCount++;
        }
    }

    if (divisibleCount == 2)
    {
        cout << num << " is a Prime number" << endl;
    }
    else
    {
        cout << num << " is not a Prime number" << endl;
    }
    return 0;
}