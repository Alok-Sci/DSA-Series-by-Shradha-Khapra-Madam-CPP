/// * Q. Calculate nCr binomial coefficient for n & r
// n!/r! (n-r)!
// n factorial divide by r factorial into factorial of n minus r

#include <iostream>

using namespace std;

int factorial(int num)
{
    if (num > 1)
        return num * factorial(num - 1);

    return num;
}

int nCr(int n, int r)
{
    // * factorial of n
    int fact_n = factorial(n);

    // * factorial of r
    int fact_r = factorial(r);

    // * factorial of (n-r)
    int fact_nmr = factorial(n - r);

    if (fact_nmr == 0)
        cout << "Division by 0 is not possible" << endl;

    // * Binomial coefficient of n & r (nCr)
    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n, r;

    cout << "Find the binomial coefficient of n & r:" << endl;

    cout << "n = ";
    cin >> n;
    cout << endl;

    cout << "r = ";
    cin >> r;
    cout << endl;

    cout << "Binomial coefficient of n & r: " << nCr(n, r) << endl;
}