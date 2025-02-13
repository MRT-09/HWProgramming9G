#include <stdio.h>
#include <math.h>
int main() {
    long int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
        a[i] = pow(a[i], 4);
    printf("The elements raised to the power of 4 are: ");
    for (int i = 0; i < n; i++)
        printf("%ld ", a[i]);
    printf("\n");
    return 0;
}