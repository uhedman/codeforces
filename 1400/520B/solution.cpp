#include <iostream>
using namespace std;

int main() {
	int n, m, steps = 0;
	cin >> n >> m;

	while (m > n) {
		if (m % 2 != 0) {
			m += 1;
		} else {
			m /= 2;
		}
		steps += 1;
	}

	steps += n - m;

	cout << steps << endl;
	return 0;
}
