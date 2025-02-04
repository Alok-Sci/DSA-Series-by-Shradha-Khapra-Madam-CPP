#include <iostream>
using namespace std;

const int ADULT_AGE = 18;

int main()
{
    int age;
    cout << "++++++++++++++++" << endl;
    cout << "Can vote or not?" << endl;
    cout << "++++++++++++++++" << endl;
    cout << "Tell us your age, Please! ";
    cin >> age;

    if (age < ADULT_AGE)
    {
        cout << "Kid! You can not vote! Sorry!" << endl;
    }
    else
    {
        cout << "Sir! You can choose who to vote!" << endl;
    }

    return 0;
}