#include <stdio.h>
#include "processes.h"

Process processes[MAX_PROCESS_COUNT];
int processesCount;

void printMenu() {
    printf("----------------------------------------------------------------\n");
    printf("1. Output active processes\n");
    printf("2. Create new process (by name)\n");
    printf("3. Terminate a process (by id)\n");
    printf("4. Exit terminal\n");
    printf("----------------------------------------------------------------\n");
    printf("Enter your choice: ");
}

void printProcesses() {
    printf("There are currently %d processes running\n", processesCount);
    for (int i = 0; i < processesCount; i++)
        printf("Procsess %lu: %-31s\n", processes[i].processId, processes[i].processName);
}

void createProcess() {
    char name[31];
    scanf("%s", &name);
    int newid = createNewProcess(name);
    if (newid == 0)
        printf("ERROR: An error occured while creating process!\n");
    else
        printf("Process created successfully!\n");
}

void terminateProcess() {
    ul id;
    scanf("%lu", &id);
    stopProcess(id);
}

int main() {
    int choice;
    while (1) {
        printMenu();
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printProcesses();
            break;
        case 2:
            printf("Enter name of the process you want to create: ");
            createProcess();
            break;
        case 3:
            printf("Enter ID of the process you want to terminate: ");
            terminateProcess();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid choice!");
        }
    }
    return 0;
}