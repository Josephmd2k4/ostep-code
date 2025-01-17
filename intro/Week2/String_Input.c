#include <stdio.h>

int main(){
    char firstName[30];
    char lastName[30];
    printf("What is your first name? ");
    scanf("%s", firstName);
    printf("What is your last name? ");
    scanf("%s", lastName);
    printf("Hello, %s %s!\n", firstName, lastName);
}