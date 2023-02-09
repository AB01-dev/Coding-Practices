#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3, num4;
    cout << "Emter the three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3)
        cout << "num1: " << num1 << endl;
    else if (num2 > num3)
        cout << "num2: " << num2 << endl;
    else
        cout << "num3: " << num3 << endl;

return 0;
}