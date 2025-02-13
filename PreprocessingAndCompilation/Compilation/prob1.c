#include <stdio.h>
#define SqS(a, b) (((a) + (b)) * ((a) + (b)))
int main() {
    int a = 5, b = 6;
    printf("The square of %d + %d is %d\n", a, b, SqS(a, b));
    return 0;
}