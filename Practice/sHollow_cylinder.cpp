#include <iostream>
using namespace std;

int main() {

    int row, col;
    cout << "Enter number of rows and columns: ";
    cin >> row >> col;

    for (int i = 1; i < row+1; i++) {
        for (int j = 1; j < col+1; j++) {
            if (i == 1 || i == row || j == 1 || j == col)
                cout << "*";
            else
                cout << " ";
        } cout << endl;
    }

return 0;
}