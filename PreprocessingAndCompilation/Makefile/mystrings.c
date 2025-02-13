#include "mystrings.h"

int strlength(const char *str) {
    int result = -1;
    while (str[++result] != '\0');
    return result;
}

void strconcat(char *dest, const char *src) {
    int ds = strlength(src);
    int i = ds;
    while(src[i - ds] != '\0') {
        dest[i] = src[i - ds];
        i++;
    }
    dest[i] = '\0';
}

int strcompare(const char *str1, const char *str2) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i])
            return str1[i] > str2[i] ? 1 : -1;
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0')
        return 0;
    return str2[i] == '\0' ? 1 : -1;
}