#include <iostream>
#include <cmath>
using namespace std;

void CheckPythagorian(int num1, int num2, int num3) {
    int a, b, c;
    if (num1 > num2 && num1 > num3)
        a = num1, b = num2, c = num3;
    else if (num2 > num3)
        a = num2, b = num3, c = num1;
    else
        a = num3, b = num1, c = num2;
    if ( pow(a,2) == pow(b,2) + pow(c,2))
        cout << "True";
    else
        cout << "False";
}


int main() {

    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    CheckPythagorian(x, y, z);

return 0;
}