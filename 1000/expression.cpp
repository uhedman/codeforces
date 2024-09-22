#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int sol = 0;
  if (a == 1) {
    if (c == 1) {
      cout << b + 2;
    }
    else {
      cout << (b + 1) * c;
    }
  }
  else if (c == 1) {
    cout << a * (b + 1);
  }
  else if (b == 1) {
    if (a < c) {
      cout << (a + 1) * c;
    }
    else {
      cout << a * (c + 1);
    }
  }
  else {
    cout << a * b * c;
  }
}