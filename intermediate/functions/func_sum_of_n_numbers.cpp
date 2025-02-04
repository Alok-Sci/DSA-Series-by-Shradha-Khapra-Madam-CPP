#include <iostream>
using namespace std;

int sumN(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++)
        sum += i;

    return sum;
}

int main() {
    cout << "Sum: " << sumN(10) << endl;
    return 0;
}