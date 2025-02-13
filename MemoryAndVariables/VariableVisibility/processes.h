#pragma once

#define ul unsigned long
#define MAX_PROCESS_COUNT 5

typedef struct {
    ul processId;
    char processName[31];
} Process;

extern Process processes[MAX_PROCESS_COUNT];
extern int processesCount;

ul createNewProcess(char *name);
void stopProcess(ul id);