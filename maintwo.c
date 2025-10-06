#include <stdio.h>
#include <unistd.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n=== User Information ===\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Process PID: %d\n", getpid());
    printf("Process PPID: %d\n", getppid());

    return 0;
}
