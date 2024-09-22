#include <iostream>
using namespace std;

int main() {
	int n, odd = -1, even = -1, holder;
  cin >> n;
  for (int i = 1; i < n + 1; i++) {
    cin >> holder;
    if (holder % 2 == 1) {
      if (odd == -1) {
        if (even < -1) {
          cout << i;
          return 0;
        }
        odd = i;
      }
      else {
        if (even >= 0) {
          cout << even;
          return 0;
        }
        odd = -2;
      }
    }
    else {
      if (even == -1) {
        if (odd < -1) {
          cout << i;
          return 0;
        }
        else {
          even = i;
        }
      }
      else {
        if (odd >= 0) {
          cout << odd;
          return 0;
        }
        even = -2;
      }
    }
  }
}