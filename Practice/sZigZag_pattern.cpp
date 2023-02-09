#include <iostream>
using namespace std;

int main() {

    int n = 9;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i == 1) {
                if ( (i+j) % 4 == 0) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            else if (i == 2) {
                if ( (i+j) % 2 == 0) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            else {
                if ( (i+j) % 4 == 0) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            } cout << endl;
        }

return 0;
}