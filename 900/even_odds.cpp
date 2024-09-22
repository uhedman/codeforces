#include <iostream>
using namespace std;

int main() {
	unsigned long long n, k, mid;
  cin >> n >> k;
  mid = n / 2 + n % 2;
  if (k > mid) {
    cout << 2*(k-mid);
  }
  else {
    cout << 2*(k-1) + 1;
  }
}