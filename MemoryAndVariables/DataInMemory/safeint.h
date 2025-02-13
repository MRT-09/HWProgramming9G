#ifndef SAFEINT_H
#define SAFEINT_H

typedef struct {
    int value;
    int errorflag;
} SafeResult;

SafeResult safeAdd(const int a, const int b);
SafeResult safeSub(const int a, const int b);
SafeResult safeMul(const int a, const int b);
SafeResult safeDiv(const int a, const int b);
SafeResult safeStI(const char* str);

#endif