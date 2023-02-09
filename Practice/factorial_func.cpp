#include <iostream>
using namespace std;

int factorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        if (num == 0)
            return 1;
        factorial *= i;
    } return factorial;
}

int main() {

    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << factorial(num) << endl;

return 0;
}