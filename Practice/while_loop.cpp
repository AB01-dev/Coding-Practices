#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter any number: ";
    cin >> num;

    while (num >= 0) {
        cout << "Number: " << num << endl;
        num--;
    }

return 0;
}