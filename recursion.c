#include <stdio.h>

int factorial_tail(int n, int accumulator) {
    if (n == 0 || n == 1)
        return accumulator;
    return factorial_tail(n - 1, n * accumulator);
}

int main() {
    int n = 5;
    int result = factorial_tail(n, 1);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}
