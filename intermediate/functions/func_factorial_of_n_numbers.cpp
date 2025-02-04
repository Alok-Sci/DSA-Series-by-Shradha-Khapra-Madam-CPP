#include <iostream>
using namespace std;

int factorialN(int num){
    int sum = 1;
    for (int i = 1; i <= num; i++)
    sum *= i;

    return sum;
}

int main() {
    cout << "Factorial: " << factorialN(5) << endl;
    return 0;
}