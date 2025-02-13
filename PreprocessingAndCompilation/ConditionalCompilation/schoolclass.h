#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H
#include "person.h"
typedef struct {
    Person teacher, students[26];
    int classN;
    char classL;
} SchoolClass;
#endif