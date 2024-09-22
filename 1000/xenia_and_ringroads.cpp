#include <iostream>
using namespace std;

int main() {
	long n, m, state = 1, ai;
  cin >> n >> m;
  long long steps = 0;
  for (long i = 0; i < m; i++) {
    cin >> ai;
    if (state <= ai) {
      steps += ai - state;
    }
    else {
      steps += n - state + ai;
    }
    state = ai;
  }
  cout << steps;
}