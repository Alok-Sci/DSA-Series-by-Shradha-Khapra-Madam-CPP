/// * Q. WAF to print nth fibonacci
/// * Fibonacci: 0 1 1 2 3 5 8 13 .....

#include <iostream>
using namespace std;

/// * get next fibonacci by summing up previous two numbers
int nextFibonacci(int num1, int num2)
{
    return num1 + num2;
}

/// * find fibonacci at nth position
int fibonacciAtNthPosition(int index)
{
    // * if index is 0 or 1 or 2 then will return fibonacci manually
    switch (index)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    }

    // * if execution reached this far then counter index must be greater than 2
    for (int fibonacciCounter = 2, previousFibonacci = 0, currentFibonacci = 1; fibonacciCounter <= index; fibonacciCounter++)
    {
        // * get next fibonacci number
        int newFibonacci = nextFibonacci(previousFibonacci, currentFibonacci);

        // * update fibonaccci numbers
        previousFibonacci = currentFibonacci;
        currentFibonacci = newFibonacci;

        // * fibonacciCounter == index
        if (fibonacciCounter == index)
            return currentFibonacci;
    }
}

int main()
{
    int n;
    cout << "Find the nth fibonacci, enter the n: ";
    cin >> n;

    cout << "Fibonacci at " << n << " is " << fibonacciAtNthPosition(n) << endl;
    return 0;
}