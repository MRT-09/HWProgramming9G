#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Invalid number of arguments\n");
        return 1;
    }
    printf("----------------STRCOMPARE Result----------------\n");
    printf("Comparing %s and %s: %d\n", argv[1], argv[2], strcompare(argv[1], argv[2]));
    return 0;
}