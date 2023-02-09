#include <iostream>
using namespace std;

void max(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3)
        cout << "Max: " << num1 << endl;
    else if (num2 > num3)
        cout << "Max: " << num2 << endl;
    else
        cout << "Max: " << num3 << endl;
}
void min(int num1, int num2, int num3) {
    if (num1 < num2 && num1 < num3)
        cout << "Min: " << num1 << endl;
    else if (num2 < num3)
        cout << "Min: " << num2 << endl;
    else
        cout << "Min: " << num3 << endl;
}

int main() {

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    max(num1, num2, num3);
    min(num1, num2, num3);

return 0;
}