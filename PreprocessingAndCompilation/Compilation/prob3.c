#include <stdio.h>
#include <string.h>
#include "transformation.h"
int main() {
    const char* VInput = "-123";
    const char* IVInput = "12ab23";

    Transformation t1 = stoi(VInput);
    printf("Input: %s: Result: %ld, Error: %s\n", VInput, t1.result, t1.error);

    Transformation t2 = stoi(IVInput);
    printf("Input: %s: Result: %ld, Error: %s\n", IVInput, t2.result, t2.error);

    return 0;
}