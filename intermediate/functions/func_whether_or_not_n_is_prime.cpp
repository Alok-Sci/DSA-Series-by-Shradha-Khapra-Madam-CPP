/// * Q. WAF to check if a number is prime or not.
/// * prime is the number which is divisible by 1 or itself (only two divisers)

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
    cout << "Find whether or not a number is prime: ";
    cin >> num;

    if (isPrime(num))
        cout <<"Prime" << endl;
    else
        cout <<"Not prime" << endl;
}