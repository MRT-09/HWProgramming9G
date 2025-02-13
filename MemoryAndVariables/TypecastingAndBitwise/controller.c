#include <stdio.h>
int lightState;
void printMenu() {
    printf("1. Switch light\n");
    printf("2. Print state\n");
    printf("3. Exit\n");
}
void switchLight(const int light) {
    lightState ^= (1 << (light - 1));
}
int main() {
    int choice, light;
    while (1) {
        printMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter light to switch: ");
                scanf("%d", &light);
                switchLight(light);
                break;
            case 2:
                printf("Light is on in rooms:");
                for (int i = 0; i < 8; i++)
                    if (lightState & (1 << i))
                        printf(" %d", i + 1);
                printf("\n");
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}