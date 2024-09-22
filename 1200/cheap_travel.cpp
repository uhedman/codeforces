#include <iostream>
using namespace std;

int main() {
	int n, m, a, b;
  cin >> n >> m >> a >> b;
  if (a < (float)b / m) {
    cout << n*a;
  }
  else if ((n % m)*a < b) {
    cout << (n / m)*b + (n % m)*a;
  }
  else {
    cout << ((n / m) + 1)*b;
  }
}