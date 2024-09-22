#include <iostream>
using namespace std;

int main() {
	int s, n;
  cin >> s >> n;
  int arr[n][2], alive = 0;
  int xi, yi;
  for (int i = 0; i < n; i++) {
    cin >> xi >> yi;
    if (xi < s) {
      s += yi;
      for (int j = alive - 1; j >= 0; j--) {
        if (s > arr[j][0]) {
          s += arr[j][1];
          alive--;
        }
        else {
          break;
        }
      }
    }
    else {
      for (int j = 0; j < alive; j++) {
        if (xi > arr[j][0]) {
          int xaux = xi, yaux = yi;
          xi = arr[j][0];
          yi = arr[j][1];
          arr[j][0] = xaux;
          arr[j][1] = yaux;
        }
      }
      arr[alive][0] = xi;
      arr[alive][1] = yi;
      alive++;
    }
  }
  if (alive > 0) {
    cout << "NO";
  }
  else {
    cout << "YES";
  }
}