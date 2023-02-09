#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;

return 0;
}