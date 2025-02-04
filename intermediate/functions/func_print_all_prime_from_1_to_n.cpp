/// * Q. WAF to print all prime numbers from 1 to N.

#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;

    cout << "Enter a number to print all prime from 1: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}