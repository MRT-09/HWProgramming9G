#include <stdio.h>
int gcd(int a, int b) {
    int t;
    while (b) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main() {
    int a = 12, b = 18;
    printf("The LCM of %d and %d is %d\n", a, b, a / gcd(a, b) * b);
    return 0;
}