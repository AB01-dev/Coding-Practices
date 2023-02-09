#include <iostream>
using namespace std;

int main() {

    int number, sum = 0;
    cout << "Enter any number: ";
    cin >> number;

    while (number >= 0) {
    sum += number;
    cout << "Enter a number: "; cin >> number;
    } cout << "\nThe sum is " << sum << endl;

return 0;
}