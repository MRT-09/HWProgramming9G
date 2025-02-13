#include <stdio.h>
#define SWAP(A, B, TYPE) {TYPE tmp = A; A = B; B = tmp;}
int main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    SWAP(a, b, int);
    printf("a = %d, b = %d\n", a, b);
    return 0;
} 