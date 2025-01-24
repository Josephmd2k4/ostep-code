//read the hello.txt file

#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("hello.txt", "r");
    char MyString[100];
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }else{
        //loop for every line
        while(fgets(MyString, 100, fptr) != NULL){
            printf("%s", MyString);
        }
    }
    fclose(fptr);
}