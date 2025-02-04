#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << " * ";
            col++;
        }
        cout << endl;
        row++;
    }
}