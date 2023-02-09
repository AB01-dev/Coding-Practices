#include <iostream>
using namespace std;

void CheckChar(char c) {
    if ( (c >= 65 && c <= 90) || (c >= 97 && c <= 122) )
        cout << "Character";
    else
        cout << "Not a Character";
}

int main() {

    char character;
    cout << "Enter any character: ";
    cin >> character;

    CheckChar(character);

return 0;
}