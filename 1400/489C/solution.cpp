#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int m, s;
	cin >> m >> s;

	if (m > s || s > m * 9) {
		cout << "-1 -1" << endl;
		return 0;
	}

	int minimum = 0, maximum = 0, next;

	for (int i = 0; i < m; i++) {
		next = min(9, s - (m > i + 1));
		maximum = maximum * 10 + next;
		minimum = minimum + next * pow(10, i);
		s -= next;
	}
	
	cout << minimum << " " << maximum << endl;
	return 0;
}
