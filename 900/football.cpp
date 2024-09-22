#include <iostream>
using namespace std;

int main() {
  char str[101];
  cin >> str;
  int last = str[0], count = 1;
  for (int i = 1; str[i] != '\0'; i++) {
    if (last == str[i]) count++;
    else {
      last = str[i];
      count = 1;
    }
    if (count == 7) {
	    cout << "YES";
      return 0;
    }
  }
	cout << "NO";
}