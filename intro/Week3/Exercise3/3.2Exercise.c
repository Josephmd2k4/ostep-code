#include <stdio.h>

//initialize function
int calculateArea(int length, int width);

//main function
int main(){
    int length;
    int width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    //call function
    int area = calculateArea(length, width);
    printf("The area of the rectangle is %d.\n", area);
}

//function to calculate the area of a rectangle
int calculateArea(int length, int width){
    int area = length * width;
    return area;
}