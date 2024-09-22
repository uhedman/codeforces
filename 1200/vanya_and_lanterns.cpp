#include <iostream>
using namespace std;
#include <algorithm>
 
int main() {
  long n, l;
  cin >> n >> l;
  long lanterns[n];
  for (int i = 0; i < n; i++) {
    cin >> lanterns[i];
  }
  sort(lanterns, lanterns + n);
  double a = 0, b = l, c;
  while (b - a > 1e-9) {
    bool p = true;
    c = (a + b)/2;
    if (lanterns[0] - c > 0 || lanterns[n-1] + c < l) {
      p = false;
    }
    else {
      for (int i = 0; i < n - 1 && p; i++) {
        if (lanterns[i] + 2*c < lanterns[i+1]) {
          p = false;
        }
      }
    }
    if (p) {
      b = c;
    }
    else {
      a = c;
    }
  }
  cout.precision(11);
  cout << c;
}