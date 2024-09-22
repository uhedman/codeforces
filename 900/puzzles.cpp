#include <iostream>
using namespace std;
#include <algorithm>

int main() {
	int n, m;
  cin >> n >> m;
  int f[m];
  for (int i = 0; i < m; i++) {
    cin >> f[i];
  }
  
  sort(f, f + m);

  int best = f[n - 1] - f[0];
  for (int i = 1; i <= m - n; i++) {
    best = min(f[i + n - 1] - f[i], best);
  }
  cout << best;
}