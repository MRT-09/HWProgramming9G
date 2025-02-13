#pragma once

typedef struct {
    long double x1, x2;
    int norealroots;
} QuadricRootsResult;

QuadricRootsResult findroots(const long double a, const long double b, const long double c);