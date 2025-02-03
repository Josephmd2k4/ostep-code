//write a program that calls fork()
//before calling fork(), have the main process access a variable and set its value to something
//what value is the variable in the child process
//what happens to the variable when both the child and parent change the value of x

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int x = 100;
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        x = 200;
        printf("Child: x = %d\n", x);
    } else {
        x = 300;
        printf("Parent: x = %d\n", x);
    }
    return 0;
}
