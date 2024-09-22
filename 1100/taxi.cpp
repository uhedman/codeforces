#include <iostream>
using namespace std;

int main() {
	int n, s, one = 0, two = 0, three = 0, taxis = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    switch (s) {
    case 1:
      if (three > 0) {
        three--;
        taxis++;
      }
      else one++;
      break;
    case 2:
      if (two > 0) {
        two--;
        taxis++;
      }
      else two++;
      break;
    case 3:
      if (one > 0) {
        one--;
        taxis++;
      }
      else three++;
      break;    
    case 4:
      taxis++;
      break;
    }
  }
  taxis += three + ((two * 2 + one) / 4) + ((two * 2 + one) % 4 != 0);
  cout << taxis;
}