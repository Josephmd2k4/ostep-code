#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("output.txt", "a");
    fprintf(fptr, "Appended!");
    fclose(fptr);
}