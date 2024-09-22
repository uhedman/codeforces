#include <iostream>
using namespace std;
#include <cctype>

bool uppercase(char *ptr) {
  for (; *ptr != '\0'; ptr++) {
    if (!isupper(*ptr)) {
      return false;
    }
  }
  return true;
}

int main() {
	char str[101], *ptr = str;
  cin.getline(str, 101);
  bool change = uppercase(str + 1);
  if (change) {
    if(isupper(*ptr)) {
      cout << (char)tolower(*ptr++);
    }
    else {
      cout << (char)toupper(*ptr++);
    }

    for (; *ptr != '\0'; ptr++) {
      cout << (char)tolower(*ptr);
    }
  }
  else {
    for (; *ptr != '\0'; ptr++) {
      cout << *ptr;
    }
  }
}