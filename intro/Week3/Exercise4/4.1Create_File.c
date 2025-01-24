//create a file named hello.txt and write "Hello,
//How are you?
//My name is Joseph
//What's Your name?" in it.

#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt", "w");
    fprintf(fptr, "Hello,\nHow are you?\nMy name is Joseph\nWhat's Your name?");
    fclose(fptr);
}