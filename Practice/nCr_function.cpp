#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    } return fact;
}

int main() {

    int n, r;
    cout << "Enter value of n and r: ";
    cin >> n >> r;

    float nCr = factorial(n)/(factorial(n-r)*factorial(r));
    cout << nCr << endl;

return 0;
}