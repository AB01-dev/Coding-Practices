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
            cout << "*" << " ";
        } j = 2;
        for (; k <= rows+i-1; k++) {
            cout << "*" << " ";
        } cout << endl;
    }
    for (int i = rows; i >= 1; i--) {
        int k;
        for (k = 1; k <= rows-i; k++) {
            cout << "  ";
        } int j = i;
        for (; k <= rows; k++) {
            cout << "*" << " ";
        } j = 2;
        for (; k <= rows+i-1; k++) {
            cout << "*" << " ";
        } cout << endl;
    }

return 0;
}