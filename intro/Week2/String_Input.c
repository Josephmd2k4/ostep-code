#include <stdio.h>

int main(){
    char firstName[30];
    char lastName[30];
    int age;
    printf("What is your first name? ");
    scanf("%s", firstName);
    printf("What is your last name? ");
    scanf("%s", lastName);
    printf("How old are you? ");
    scanf("%d", &age);
    printf("Hello, %s %s!\n", firstName, lastName);
    printf("You are %d years old.\n", age);
    printf("Memory address of your age: %p\n", &age);
}