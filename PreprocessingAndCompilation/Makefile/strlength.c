#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    printf("----------------STRLENGTH Result----------------\n");
    for (int i = 1; i < argc; i++)
        printf("Length of %s: %d\n", argv[i], strlength(argv[i]));
    return 0;
}