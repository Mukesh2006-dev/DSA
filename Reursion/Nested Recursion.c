//Nested Recursion.

#include <stdio.h>
int nestedRec(int n) {
    if (n > 100)
        return n - 10;
    return nestedRec(nestedRec(n + 11));
}
//It calls the recursion multiple times to solve the condition.
int main() {
  int x=nestedRec(5);
  printf("%d",x);
    return 0;
}
