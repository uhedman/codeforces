#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int rx = 0, ry = 0, rz = 0;
  int nx, ny, nz;
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &nx, &ny, &nz);
    rx += nx;
    ry += ny;
    rz += nz;
  }
  if (rx == 0 && ry == 0 && rz == 0) {
    printf("%s", "YES");
  }
  else {
    printf("%s", "NO");
  }
}