#include <stdio.h>
#include <string.h>
#include "transformation.h"

Transformation stoi(const char* str) {
    Transformation t;

    if (str == "") {
        t.result = 0;
        strcpy(t.error, "The input string is empty");
        return t;
    }

    long result = 0;
    int sign = 1, i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') i++;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            t.result = 0;
            strcpy(t.error, "There is a non-digit character in the input string");
            return t;
        }

        result = result * 10 + (str[i] - '0');

        i++;
    }

    t.result = sign * result;
    strcpy(t.error, "\0");
    return t;
}