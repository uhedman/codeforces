#include <iostream>
using namespace std;

int main() {
  int n, last, recent, length = 1, maxlength = 1;
	cin >> n >> last;
  for (int i = 0; i < n - 1; i++) {
    cin >> recent;
    if (last > recent) {
      maxlength = max(length, maxlength);
      length = 1;
    }
    else {
      length++;
    }
    last = recent;
  }
  cout << max(length, maxlength);
}