#include <iostream>
using namespace std;

int main() {

    int range;
    cout << "Enter any number: ";
    cin >> range;

    for (int i = 1; i <= range; i++) {
        int j = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0)
                break;
        } if (j == i)
            cout << i << endl;
    }

return 0;
}