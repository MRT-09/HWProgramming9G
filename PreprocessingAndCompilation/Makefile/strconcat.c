#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Invalid number of arguments\n");
        return 1;
    }
    if (strlength(argv[1]) > 50 || strlength(argv[2]) > 50) {
        printf("Invalid string length\n");
        return 1;
    }
    printf("----------------STRCONCAT Result----------------\n");
    printf("Before concatenation: str1 - %s str2 - %s\n", argv[1], argv[2]);
    strconcat(argv[1], argv[2]);
    printf("After concatenation: str1 - %s, str2 - %s\n", argv[1], argv[2]);
    return 0;
}