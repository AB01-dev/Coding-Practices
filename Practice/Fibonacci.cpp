#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter stop value: ";
    cin >> n;

    int fibo, prev = 0, curr = 1;
    cout << prev << " " << curr << " ";

    for (int i = 1; i <= n; i++) {
        fibo = prev + curr;
        cout << fibo << " ";
        prev = curr;
        curr = fibo;
    }

return 0;
}