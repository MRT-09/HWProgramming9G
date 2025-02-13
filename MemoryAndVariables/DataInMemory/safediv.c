#include <stdio.h>
#include "safeint.h"
int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Invalid number of arguments\n");
        return 1;
    }
    SafeResult a = safeStI(argv[1]), b = safeStI(argv[2]);
    if (a.errorflag || b.errorflag) {
        printf("Invalid arguments\n");
        return 1;
    }
    SafeResult res = safeDiv(a.value, b.value);
    if (res.errorflag) {
        printf("Cannot divide by 0\n");
        return 1;
    }
    printf("%d / %d = %d\n", a.value, b.value, res.value);
    return 0;
}