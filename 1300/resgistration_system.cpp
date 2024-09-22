#include <iostream>
using namespace std;
#include <string>

struct item {
  string user;
  int count;
  item* next;
};

struct ht {
  item *arr[100];
};

unsigned int hash_function(string user) {
  unsigned long hash = 5381;
  int c, i = 0;

  while (c = user[i++])
    hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

  return hash;
}

int main() {
	int n;
  string line;
  ht *hash = new ht;
  for (int i = 0; i < 100; i++) {
    hash->arr[i] = NULL;
  }
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> line;
    unsigned int m = hash_function(line) % 100;
    item *list = hash->arr[m];
    // search line in hash
    item *it = list;
    if (it == NULL) {
      it = new item;
      it->count = 1;
      it->next = NULL;
      it->user = line;
      hash->arr[m] = it;
      cout << "OK\n";
      continue;
    }
    for (;;) {
      if (it->user == line) {
        cout << it->user << it->count << "\n";
        it->count++;
        break;
      }
      if (it->next != NULL) {
        it = it->next;
      }
      else {
        item *newIt = new item;
        newIt->count = 1;
        newIt->next = NULL;
        newIt->user = new char(33);
        newIt->user = line;
        it->next = newIt;
        cout << "OK\n";
        break;
      }
    }
  }
  delete hash;
}