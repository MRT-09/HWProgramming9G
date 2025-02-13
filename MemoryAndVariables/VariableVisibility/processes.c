#include "processes.h"
#include <limits.h>
#include <string.h>

static ul nextProcessId() {
    ul c = 1;
    for (int i = 0; i < processesCount; i++)
        if (processes[i].processId == c)
            c++, i = -1;
    return c;
}

ul createNewProcess(char *name) {
    if (processesCount < 5) {
        ul id = nextProcessId();
        processes[processesCount].processId = id;
        strcpy(processes[processesCount].processName, name);
        processesCount++;
        return id;
    }
    return 0;
}

void stopProcess(ul id) {
    int ind = -1;
    for (int i = 0; i < processesCount; i++) {
        if (processes[i].processId == id) {
            ind = i;
            break;
        }
    }
    if (ind == -1)
        return;
    processesCount--;
    for (int i = ind + 1; i <= processesCount; i++) {
        processes[i - 1].processId = processes[i].processId;
        strcpy(processes[i - 1].processName, processes[i].processName);
    }
}