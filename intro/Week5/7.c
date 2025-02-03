//write a program that creates a child process, and then in the child closes standard output (STDOUT_FILENO). What happens if the child calls printf() to rpint some output after closing the descriptor?

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork");
        return 1;
    } else if (pid == 0) {
        // Child process
        close(STDOUT_FILENO);
        printf("This will not be printed\n");
    } else {
        // Parent process
        wait(NULL); // Wait for child to finish
        printf("Child process finished\n");
    }

    return 0;
}