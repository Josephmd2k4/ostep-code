#include <stdio.h>

int main(){
    int theAges[10];
    int sum = 0;
    int min = 999;
    for (int i = 0; i < 10; i++){
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &theAges[i]);
        sum += theAges[i];
        if (theAges[i] < min){
            min = theAges[i];
        }
    }
    //print the average age
    float average = sum / 10.0;
    printf("The average age is: %.1f\n", average);

    //print the smallest age
    printf("The youngest age is: %d\n", min);
}