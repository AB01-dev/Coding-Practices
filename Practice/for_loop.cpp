#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter any number: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        cout << i+1 << ". Hello World!" << endl;
    }

return 0;
}