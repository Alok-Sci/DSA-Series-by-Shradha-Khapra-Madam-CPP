#include <iostream>
using namespace std;

int main()
{
    int num;
    bool isPrime = true;

    cout << "Enter a number (check whether or not the number is prime): ";
    cin >> num;

    int i = 2;

    while (i < num)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
        i++;
    }

    cout << (isPrime ? "Is Prime" : "Is not Prime") << endl;
    return 0;
}