#include <iostream>
using namespace std;

int main()
{

    // * for(initialization; condition; updation)
    // * initialization: can initialize any number of variable separating each with a comma (,)
    // * condition: can be any kind of valid condition (relational/logical)
    // * updation: can be any kind of value update. Usually we use i++(i=i+1) or i--(i=i-1), but we can also use i+5, or something like that. 
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
    
    return 0;
}