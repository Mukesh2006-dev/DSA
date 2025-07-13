//Indirect Recursion.
#include <stdio.h>
void funB(int n);

void funA(int n) {
    if (n > 0) {
        printf("A: %d ", n);
        funB(n - 1);
    }
}

void funB(int n) {
    if (n > 0) {
        printf("B: %d ", n);
        funA(n / 2);
    }
}
//Function A calls B, and B calls A.
int main() {
  funB(5);
    return 0;
}
