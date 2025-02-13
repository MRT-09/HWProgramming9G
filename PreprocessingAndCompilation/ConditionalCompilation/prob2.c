#include <stdio.h>
#define ARR_SIZE 10
long a[ARR_SIZE];
void fill() {
    for (int i = 0; i < ARR_SIZE; i++) {
        a[i] = 1 << i;
        printf("%d\n", a[i]);
    }
}
int main() {
    #if ARR_SIZE > 10 || ARR_SIZE < 1
        printf("Invalid array size\n");
        return;
    #else
    fill();
    #endif
    return 0;
}