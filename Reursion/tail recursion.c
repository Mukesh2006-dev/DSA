//Tail Recursion.

#include <stdio.h>
void tailRec(int n) {
    if (n == 0) return;
    printf("%d ", n);
    tailRec(n - 1);  
}
//Recursion call at the end first prints the element.
int main() {
   tailRec(5);
    return 0;
}
