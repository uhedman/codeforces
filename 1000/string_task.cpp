#include <stdio.h>
#include <ctype.h>

int main() {
  char *vow = "aeiouy";
  char str[101];
  char res[201];
  scanf("%s", str);
  int pos = 0;
  for (int i = 0; str[i]; i++) {
    int isVow = 0;
    for (int j = 0; j < 6; j++) {
      if (tolower(str[i]) == vow[j]) {
        isVow = 1;
      }
    }
    if (!isVow) {
      printf(".%c", tolower(str[i]));
    }
  }
  return 0;
}