#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("output.txt", "r");
    char MyString[100];
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }else{
        fgets(MyString, 100, fptr);
        printf("%s", MyString);
    }
    fclose(fptr);
}