#include <stdio.h>
#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)
DEFINE_COMMAND(world, hello) {
    printf("Hello, world!\n");
}
int main() {
    hello_world_command();
    return 0;
}