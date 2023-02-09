#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int n;
    long l;
    char c;
    float f;
    double d;
    cin >> n >> l >> c >> f >> d;
    cout << n << endl << l << endl << c << endl;
    cout << std::fixed << std::setprecision(3) << f << endl;
    cout << std::fixed << std::setprecision(3)<< d << endl;
    return 0;
}