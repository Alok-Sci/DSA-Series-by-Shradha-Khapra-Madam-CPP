#include <iostream>
using namespace std;

// * break: is a special reserved keyword
// * keywords has special meaning to the compiler
int main(){
    int i = 0;

    while(i < 50){
        cout << i << endl;
        if(i == 8) break; // * break will terminate the loop when the i's value will reach 8 
        i++;
    }
}