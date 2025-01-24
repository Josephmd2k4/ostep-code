#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("output.txt", "w");
    fprintf(fptr, "Overwritten!");
    fclose(fptr);
    
}