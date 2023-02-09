#include <iostream>
using namespace std;

int main() {

    int num, i;
    cout << "Enter any number: ";
    cin >> num;

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << "Not prime";
            break;
        }
    } if (num == i)
        cout << "prime" << endl;

return 0;
}