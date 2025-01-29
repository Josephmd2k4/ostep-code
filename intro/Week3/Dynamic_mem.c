#include <stdio.h>
#include <stdlib.h>


int main(){
    int *students;
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    students = calloc(num_students, sizeof(*students));
    printf("%zu\n", num_students * sizeof(*students));

}