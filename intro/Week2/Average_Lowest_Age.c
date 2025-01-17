#include <stdio.h>

int main(){
    int amount;

    printf("How many people are you going to enter the age for? ");
    scanf("%d", &amount);

    int theAges[amount];
    int sum = 0;
    int min = 999;
    for (int i = 0; i < amount; i++){
        printf("Enter the age of person %d: ", i + 1);
        scanf("%d", &theAges[i]);
        sum += theAges[i];
        if (theAges[i] < min){
            min = theAges[i];
        }
    }
    //print the average age
    float average = sum / amount;
    printf("The average age is: %.1f\n", average);

    //print the smallest age
    printf("The youngest age is: %d\n", min);
}