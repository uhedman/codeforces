#include <stdio.h>

int main() {
  char hello[] = "hello";
  char input[101];
  scanf("%s", input);
  int ptr = 0;
  for (int i = 0; input[i] != '\0'; i++) {
    if (hello[ptr] == input[i]) {
      ptr++;
      if (ptr == 5) {
        printf("YES");
        return 0;
      }
    }
  }
  printf("NO");
  return 0;
}