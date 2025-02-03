
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//make the child go first
int main(int argc, char const *argv[])
{
    int rc = fork();
    if (rc < 0)
    {
        fprintf(stderr, "fork failed\n");
        exit(1);
    }
    else if (rc == 0)
    {
        printf("Child: hello!");
    }
    else
    {
        sleep(1);
        printf("Parent: Goodbye!");
    }
    return 0;
}
