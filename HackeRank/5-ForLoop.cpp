#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    // Complete the code.
    int a, b;
    cin >> a >> b;
    char *num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
            cout << num[i-1]<< endl;
        else
            i % 2 == 0 ? cout << "even" << endl : cout << "odd"<< endl;
    }
    
    
    return 0;
}