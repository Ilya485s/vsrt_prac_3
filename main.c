#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
    /* Моя первая программа на Си */
    printf("Hello, World! This is my first C program.\n");
    printf("ID of the current process: %d\n", getpid());
    printf("ID of the parent process: %d\n", getppid());

    return 0;
}
