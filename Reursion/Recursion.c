//Basic Beginner Recursion code
#include <stdio.h>

void printDescending(int n) {
    if (n == 0) return;       
    printf("%d ", n);         
    printDescending(n - 1);   
}
//This help to print elements in Descending order
int main() {
    printDescending(5);       
    return 0;
}
