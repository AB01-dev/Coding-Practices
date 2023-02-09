#include <iostream>
using namespace std;

int main() {

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        int k;
        for (k = 1; k <= rows-i; k++) {
            cout << "  ";
        } int j = i;
        for (; k <= rows; k++) {
            cout << j-- << " ";
        } j = 2;
        for (; k <= rows+i-1; k++) {
            cout << j++ << " ";
        } cout << endl;
    }

return 0;
}