//Tree Recursion.

#include <stdio.h>
void treeRec(int n) {
    if (n == 0) return;
    printf("%d ", n);
    treeRec(n - 1);
    treeRec(n - 1);
}
//There will be multiple calls of recursion and prints the elements based on calls.
int main() {
   treeRec(5);
    return 0;
}
