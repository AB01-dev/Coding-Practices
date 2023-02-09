#include <iostream>
using namespace std;

int linearSearch(int arr[], int limit, int key) {
    for (int i = 0; i < limit; i++) {
        if (arr[i] == key)
            return i;
    } return -1;
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter a value for " << i+1 << ": ";
        cin >> arr[i];
    } int key; cin >> key;
    cout << linearSearch(arr, n, key) << endl;

return 0;
}