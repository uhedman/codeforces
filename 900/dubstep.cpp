#include <iostream>
using namespace std;

int main() {
	char str[201], out[201], wub[] = "WUB";
  cin >> str;
  int j = 0, matchs = 0;
  bool spaced = true;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == wub[matchs]) {
      if (++matchs == 3) {
        spaced = false;
        matchs = 0;
      }
    }
    else {
      if (!spaced) {
        out[j++] = ' ';
        spaced = true;
      }
      for (int k = 0; k < matchs; k++) {
        out[j++] = wub[k];
      }
      if (str[i] == wub[0])  {
        matchs = 1;
      }
      else {
        out[j++] = str[i];
        matchs = 0;
      }
    }
  }
  if (!spaced) {
    out[j++] = ' ';
    spaced = true;
  }
  for (int k = 0; k < matchs; k++) {
    out[j++] = wub[k];
  }
  out[j] = '\0';
  if (out[0] == ' ') {
    cout << out + 1;
  }
  else {
    cout << out;
  }
}