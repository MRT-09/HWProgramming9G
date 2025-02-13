#include "safeint.h"

SafeResult safeAdd(const int a, const int b) {
    SafeResult result;
    if ((a > 0 && b > 0 && a + b < 0) || (a < 0 && b < 0 && a + b > 0)) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = a + b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safeSub(const int a, const int b) {
    SafeResult result;
    if ((a > 0 && b < 0 && a - b < 0) || (a < 0 && b > 0 && a - b > 0)) {
        result.value = 0;
        result.errorflag = 1;
    } else result = safeAdd(a < 0 ? -a : a, b < 0 ? -b : b);
    return result;
}

SafeResult safeMul(const int a, const int b) {
    SafeResult result;
    if (a == 0 || b == 0 || (a > 0 && b > 0 && a * b < 0) || (a < 0 && b < 0 && a * b < 0) || (a > 0 && b < 0 && a * b > 0) || (a < 0 && b > 0 && a * b > 0)) {
        result.value = 0;
        result.errorflag = 0;
    } else {
        result.value = a * b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safeDiv(const int a, const int b) {
    SafeResult result;
    if (b == 0) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = a / b;
        result.errorflag = 0;
    }
    return result;
}

SafeResult safeStI(const char* str) {
    SafeResult result;
    result.value = 0;
    result.errorflag = 0;
    int i = 0, sign = 1;
    if (str[0] == '-') sign = -1, i++;
    else if (str[0] == '+') i++;
    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
        int digit = (str[i] - '0');
        SafeResult temp = safeMul(result.value, 10);
        if (temp.errorflag) {
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
        result = safeAdd(temp.value, digit);
        if (result.errorflag) return result;
    }
    return safeMul(result.value, sign);
}