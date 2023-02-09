#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    } return fact;
} int nCr(int x, int y) {
    return factorial(x) / (factorial(x-y) * factorial(y));
}

int main() {

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        } cout << endl;
    }

return 0;
}