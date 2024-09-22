#include <stdio.h>
 
int main(){
  long long int n, m, a, meed, need;
  scanf("%lld", &n);
  scanf("%lld", &m);
  scanf("%lld", &a);
  meed = m/a;
  need = n/a;
  if (meed*a < m) meed++;
  if (need*a < n) need++;
  printf("%lld\n", meed * need);
  return 0;
}