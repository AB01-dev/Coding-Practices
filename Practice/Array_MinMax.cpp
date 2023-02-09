#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter value for " << i+1 << ": ";
        cin >> arr[i];
    } int ArMin = INT_MAX, ArMax = INT_MIN;
    for (int i = 0; i < n; i++) {
        ArMin = min(ArMin, arr[i]);
        ArMax = max(ArMax, arr[i]);
    } cout << "ArMin: " << ArMin << endl << "ArMax: " << ArMax << endl;

return 0;
}