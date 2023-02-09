#include <iostream>
using namespace std;

int main() {

    int number;
    cout << "Enter any number: ";
    cin >> number;

    do {
        cout << "Number: " << number << endl;
        number--;
    } while (number >= 0);

return 0;
}