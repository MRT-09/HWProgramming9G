#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

typedef struct {
    long int result;
    char error[101];
} Transformation;

Transformation stoi(const char* str);

#endif