#include <iostream>
using namespace std;

int main() {
	int n;
  cin >> n;
  int coins[n], him = 0;
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
    him += coins[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (coins[j] < coins[j + 1]) {
        int aux = coins[j];
        coins[j] = coins[j + 1];
        coins[j + 1] = aux;
      }
    }
  }

  int me = coins[0];
  him -= me;
  for (int i = 1; i < n; i++) {
    if (me > him) {
      cout << i;
      return 0;
    }
    else {
      me += coins[i];
      him -= coins[i];
    }
  }
  cout << n;
}