#include <iostream>
using namespace std;

int main()
{
    int sum;
    int lastNum;
    cout << "Enter number till which you want to find sum of numbers from 1: ";
    cin >> lastNum;

    for (int i = 0; i <= lastNum; i++)
    {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
}