#include <iostream>
using namespace std;

int factorial(int n) {
    if (n >= 1)
        return factorial(n)*factorial(n-1);
    else
        return 1;
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int fact = factorial(n);
    cout << fact << endl;

return 0;
}