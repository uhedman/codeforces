#include <iostream>
using namespace std;

int main() {
	int n, m;
  cin >> n >> m;
  int min = n < m ? n : m;
  if (min % 2 == 0) {
    cout << "Malvika";
  }
  else {
    cout << "Akshat";
  }
}