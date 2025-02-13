#include <stdio.h>
#define DEBUG(a) printf("Variable name: %s, value: %d, line: %d, file: %s\n", #a, a, __LINE__, __FILE__)
int main() {
    int a;
    scanf("%d", &a);
    DEBUG(a);
    return 0;
}