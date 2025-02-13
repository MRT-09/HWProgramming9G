#include <stdio.h>
#define DEBUG
void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    #ifdef DEBUG
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    #endif
}
int main() {
    int a[100], n, sum = 0;
    sort(a, n);
    #ifdef DEBUG
    for (int i = 0; i < n; i += 3)
        printf("%d ", a[i]);
    #endif
    for (int i = 0; i < n; i += 3)
        sum += a[i];
    printf("\n%d\n", sum);
    return 0;
}