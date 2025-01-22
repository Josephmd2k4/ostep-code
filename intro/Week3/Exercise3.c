#include <stdio.h>

//initialize function
float calculateArea(float radius);

//main function
int main(){
    //initialize variables
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    //call function
    float area = calculateArea(radius);
    printf("The area of the circle is %.2f.\n", area);
}

//function to calculate the area of a circle
float calculateArea(float radius){
    int area = 3.14 * radius * radius;
    return area;
}