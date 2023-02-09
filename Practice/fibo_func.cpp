#include <iostream>
using namespace std;

void fibo(int n) {
    int prev = 0, curr = 1, result = 0;
    for (int i = 0; i <= n; i++) {
        result = prev + curr;
        prev = curr;
        curr = result;
        cout << result << " ";
    } cout << endl;
}

int main() {

    int num;
    cout << "Enter any number: ";
    cin >> num;
    cout << 0 << " " << 1 << " ";
    fibo(num);

return 0;
}