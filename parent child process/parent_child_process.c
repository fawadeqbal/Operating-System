#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // Print something and check PID of the parent
    printf("Parent Process: %d\n", getpid());

    // Create a child process and print child PID in parent process
    int child_pid = fork();

    if (child_pid > 0) {
        // Parent process
        printf("Parent Process created a child process with PID: %d\n", child_pid);
    } else {
        // Child process
        printf("Child Process: %d\n", getpid());
    }

    return 0;
}
