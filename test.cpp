#include <iostream>
using namespace std;

int main() {

	int n = 10;
	int prev = 0;
	int curr = 1;

	cout << n << ": " << prev << " ";

	for (int i = 1; i < n; i++) {
		cout << curr << " ";
		int next = prev + curr;
		prev = curr;
		curr = next;
	}

return 0;
}