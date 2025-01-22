#include <stdio.h>

int main(){

    float CostOfItem = 9.99;
    int Quantity;

    printf("How many are you buying? \n");
    scanf("%d", &Quantity);

    float TotalCost = CostOfItem * Quantity;

    printf("The total cost is: %.2f\n", TotalCost);
}